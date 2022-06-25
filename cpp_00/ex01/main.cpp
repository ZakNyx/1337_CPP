/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:39:03 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/24 19:50:36 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	std::cout << "ADD / SEARCH / EXIT" << std::endl;
	PhoneBook phoneBook;
	std::string mode;
	while (1)
	{
		std::getline(std::cin, mode);
		if (mode == "ADD")
			phoneBook.add();
		if (mode == "SEARCH")
			phoneBook.search();
		if (mode == "EXIT")
			std::exit(0);
	}
	return (0);
}