/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:26:16 by zihirri           #+#    #+#             */
/*   Updated: 2023/06/07 17:32:07 by zihirri          ###   ########.fr       */
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
		if (delem == std::string::npos)
			std::cerr << "Error: bad input => " << line << std::endl;
		_date = line.substr(0, delem - 1);
		_value = line.substr(delem + 2);
		
		// std::cout << _date  << _value <<std::endl;
		checkParams(_date, _value);
	}
}

void BitcoinExchange::checkParams(std::string date, std::string value)
{
	(void)value;
	std::stringstream ss(date);
    std::string yearStr, monthStr, dayStr;
    getline(ss, yearStr, '-');
    getline(ss, monthStr, '-');
    getline(ss, dayStr, '-');

    // Convert the extracted strings to integers
	int	year, month, day;
    year = std::stoi(yearStr);
    month = std::stoi(monthStr);
    day = std::stoi(dayStr);
	std::cout << year << " " << month << " " << day << std::endl;
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