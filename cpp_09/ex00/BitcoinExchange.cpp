/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:26:16 by zihirri           #+#    #+#             */
/*   Updated: 2023/06/06 18:40:14 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ){
	readExchangeData("data.csv");
	std::cout << "BitcoinExchange Constructor Called !" << std::endl;
}


BitcoinExchange::BitcoinExchange(BitcoinExchange const & _p1){
    
}

void	BitcoinExchange::readExchangeData(const std::string& filename){
	// Opening the file and checking if it exists!
	std::ifstream	inputFile("date.csv");
	if (!inputFile.is_open()) {
		std::cerr << "Failed to open the file." << std::endl;
		return ;
	}

	bool skipHeader = true;
	std::string	line;
	while (getline(inputFile, line))
	{
		if (skipHeader == true)
		{
			skipHeader == false;
			continue;
		}
		std::stringstream ss(line);
		std::string _date, _rate;
		getline(ss, _date, ',');
		getline(ss, _rate, ',');

		std::stringstream rateStream(_rate);
		float rate;
		rateStream >> rate;

		exchangeData[_date] = _rate;
		}
	inputFile.close();
}

BitcoinExchange & BitcoinExchange::operator = (BitcoinExchange const & _p1){
	return (*this);
}


BitcoinExchange::~BitcoinExchange( void ){
	std::cout << "BitcoinExchange Destructor Called !" << std::endl;
}