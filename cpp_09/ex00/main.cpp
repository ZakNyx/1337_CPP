/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:26:13 by zihirri           #+#    #+#             */
/*   Updated: 2023/06/07 17:11:56 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	ft_error(std::string error)
{
	std::cout << "Error: " << error << std::endl;
	exit(1);
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
	{
		std::cerr << "wront args" << std::endl;
		exit(1);
	}
	
	BitcoinExchange test(av[1]);

	// test.printExchangeData();
}