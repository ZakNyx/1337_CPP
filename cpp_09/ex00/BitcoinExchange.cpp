/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:26:16 by zihirri           #+#    #+#             */
/*   Updated: 2023/06/10 17:41:39 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(std::string filename)
{
	readExchangeData("data.csv");
	std::ifstream input(filename.c_str());
	std::string line;
	std::string _date, _value;
	float f_value;
	getline(input, line);
	while (getline(input, line))
	{
		size_t delem = line.find(" | ");
		if ((delem == std::string::npos) || delem >= line.length() - 1)
			std::cerr << "Error: bad input => " << line << std::endl;
		_date = line.substr(0, delem);
		_value = line.substr(delem + 3);
		if (checkParams(_date, _value) == 1)
			continue;
		f_value = std::atof(_value.c_str());
		std::cout << _date << " => " << _value << " = " << f_value * getValue(_date) << std::endl;
	}
}

float BitcoinExchange::getValue(std::string date)
{
	if (exchangeData.find(date) != exchangeData.end())
		return (exchangeData[date]);
	else
	{
		std::map<std::string, float>::const_iterator it = exchangeData.lower_bound(date);
		return ((--it)->second);
	}
}

int BitcoinExchange::checkParams(std::string date, std::string value)
{
	(void)value;
	std::stringstream ss(date);

	if (parseDate(date) == 1)
		return (1);
	float fvalue = std::atof(value.c_str());
	if (fvalue < 0.f)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (1);
	}
	if (fvalue > 1000.f)
	{
		std::cerr << "Error: number is too large." << std::endl;
		return (1);
	}
	return (0);
}

// Copy constructor implementation
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : exchangeData(other.exchangeData) {}

// Assignment operator implementation
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		exchangeData = other.exchangeData;
	return *this;
}

void BitcoinExchange::readExchangeData(const std::string &filename)
{
	// Opening the file and checking if it exists!
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Failed to open the file." << std::endl;
		return;
	}

	// Skipping the header
	std::string line;
	getline(inputFile, line);
	while (getline(inputFile, line))
	{
		std::stringstream ss(line);
		std::string _date, _rate;
		getline(ss, _date, ',');
		getline(ss, _rate, ',');

		std::stringstream rateStream(_rate);
		// Convert rateStr to a float
		float rate = std::atof(_rate.c_str());

		// Insert into the map
		exchangeData[_date] = rate;
	}
	inputFile.close();
}

BitcoinExchange::~BitcoinExchange(void) {}

int BitcoinExchange::parseDate(std::string date)
{
	// Check date format "YYYY-MM-DD"
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
	{
		std::cerr << "Invalid date format. Expected format: YYYY-MM-DD" << std::endl;
		return (1);
	}
	// Check year range
	std::string yearStr = date.substr(0, 4);
	int year = atoi(yearStr.c_str());
	if (year < 2009 || year > 2022)
	{
		std::cerr << "Invalid year. Year must be between 2009 and 2022." << std::endl;
		return (1);
	}
	// Check month range
	std::string monthStr = date.substr(5, 2);
	int month = atoi(monthStr.c_str());
	if (month < 1 || month > 12)
	{
		std::cerr << "Invalid month. Month must be between 1 and 12." << std::endl;
		return (1);
	}
	// Check day range
	std::string dayStr = date.substr(8, 2);
	int day = atoi(dayStr.c_str());
	// Check the number of days based on the month
	int maxDays = 31;
	if (month == 2)
	{ // February
		maxDays = 28;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{ // April, June, September, November
		maxDays = 30;
	}
	if (day < 1 || day > maxDays)
	{
		std::cerr << "Invalid day. Day must be between 1 and " << maxDays << " for month " << month << "." << std::endl;
		return (1);
	}
	return (0);
}
