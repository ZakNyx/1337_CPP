/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:41:00 by zihirri           #+#    #+#             */
/*   Updated: 2023/06/08 17:32:15 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string.h>
#include <sstream>
#include <fstream>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, float> exchangeData;
	
	public:
		BitcoinExchange(void);
		BitcoinExchange( std::string filename);
		~BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &_p1);
		BitcoinExchange &operator=(BitcoinExchange const &_p1);
		void readExchangeData(const std::string &filename);
		int checkParams(std::string date, std::string value);
		void	parseDate(std::string date);
};

void	ft_error(std::string error);
#endif