/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:39:03 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/02 12:14:18 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <fstream> 
int main(void)
{
	std::cout << "--> ADD / SEARCH / EXIT" << std::endl;
	PhoneBook phoneBook;
	std::string mode;
	while (1)
	{
		std::getline(std::cin, mode);
		if (mode == "ADD")
		{
			phoneBook.add();
			std::cout << "--> ADD | SEARCH | EXIT" << std::endl; 
		}
		else if (mode == "SEARCH")
		{
			phoneBook.search();
			std::cout << "--> ADD | SEARCH | EXIT" << std::endl; 
		}
		else if (mode == "EXIT")
			std::exit(0);
		else if (std::cin.eof())
			std::exit(0);
	}
	return (0);
}