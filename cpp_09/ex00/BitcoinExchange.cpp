/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:26:16 by zihirri           #+#    #+#             */
/*   Updated: 2023/06/08 17:54:48 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void){
}

BitcoinExchange::BitcoinExchange( std::string filename ){
	readExchangeData("data.csv");
	std::ifstream	input(filename);
	std::string		line;
	std::string		_date, _value;

	getline(input, line);
	while (getline(input, line))
	{
		size_t	delem = line.find('|');
		if ((delem == std::string::npos) || delem >= line.length() - 1)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			exit(1);
		}
		_date = line.substr(0, delem - 1);
		_value = line.substr(delem + 2);
		
		if(checkParams(_date, _value) == 1)
			exit (1);
	}
}

int BitcoinExchange::checkParams(std::string date, std::string value)
{
    (void)value;
    std::stringstream ss(date);

	parseDate(date);
    return 0;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & _p1){
    (void)_p1;
}

void	BitcoinExchange::readExchangeData(const std::string& filename){
	// Opening the file and checking if it exists!
	std::ifstream	inputFile(filename);
	if (!inputFile.is_open()) {
		std::cerr << "Failed to open the file." << std::endl;
		return ;
	}

	//Skipping the header
	std::string	line;
	getline(inputFile, line);
	while (getline(inputFile, line))
	{
		std::stringstream ss(line);
		std::string _date, _rate;
		getline(ss, _date, ',');
		getline(ss, _rate, ',');

		std::stringstream rateStream(_rate);
    	// Convert rateStr to a float
    	float rate = std::stof(_rate);
	
    	// Insert into the map
    	exchangeData[_date] = rate;
	}
	inputFile.close();
}

BitcoinExchange & BitcoinExchange::operator = (BitcoinExchange const & _p1){
	    (void)_p1;

	return (*this);
}


BitcoinExchange::~BitcoinExchange( void ){
	std::cout << "BitcoinExchange Destructor Called !" << std::endl;
}

void	BitcoinExchange::parseDate(std::string date)
{
 // Check date format "YYYY-MM-DD"
    if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
        std::cerr << "Invalid date format. Expected format: YYYY-MM-DD" << std::endl;
        exit(1);
    }
    // Check year range
    std::string yearStr = date.substr(0, 4);
    int year = atoi(yearStr.c_str());
    if (year < 2009 || year > 2022) {
        std::cerr << "Invalid year. Year must be between 2009 and 2022." << std::endl;
        exit(1);
    }
    // Check month range
    std::string monthStr = date.substr(5, 2);
    int month = atoi(monthStr.c_str());
    if (month < 1 || month > 12) {
        std::cerr << "Invalid month. Month must be between 1 and 12." << std::endl;
        exit(1);
    }
    // Check day range
    std::string dayStr = date.substr(8, 2);
    int day = atoi(dayStr.c_str());
    // Check the number of days based on the month
    int maxDays = 31;
    if (month == 2) { // February
        maxDays = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) { // April, June, September, November
        maxDays = 30;
    }
    if (day < 1 || day > maxDays) {
        std::cerr << "Invalid day. Day must be between 1 and " << maxDays << " for month " << month << "." << std::endl;
        exit(1);
    }
}
   