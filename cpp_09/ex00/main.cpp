/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:26:13 by zihirri           #+#    #+#             */
/*   Updated: 2023/06/06 18:55:14 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
	{
		std::cerr << "wront args" << std::endl;
		exit(1);
	}
	
	BitcoinExchange test;

	test.printExchangeData();
}