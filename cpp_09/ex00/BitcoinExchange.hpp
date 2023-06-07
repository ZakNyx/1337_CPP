/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:41:00 by zihirri           #+#    #+#             */
/*   Updated: 2023/06/06 18:55:34 by zihirri          ###   ########.fr       */
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
		~BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &_p1);
		BitcoinExchange &operator=(BitcoinExchange const &_p1);
		void readExchangeData(const std::string &filename);
    	void printExchangeData() const
    	{
    	    for (const auto& pair : exchangeData)
    	    {
    	        std::cout << "Date: " << pair.first << ", Rate: " << pair.second << std::endl;
    	    }
    	}
};
#endif