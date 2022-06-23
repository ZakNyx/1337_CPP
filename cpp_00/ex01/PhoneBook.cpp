/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:04 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/23 01:06:34 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook(void)
{
	int	i = 0;
	std::cout << "Number: " << std::endl;
	std::getline(std::cin, this->Contacts[i].number);
	if (this->Contacts[i].number == "\0")
		std::cout << "Field cannot be empty !" << std::endl;
	std::cout << "First Name: " << std::endl;
	std::getline(std::cin, this->Contacts[i].first_name);
	if (this->Contacts[i].first_name == "\0")
		std::cout << "Field cannot be empty !" << std::endl;
	std::cout << "Last Name: " << std::endl;
	std::getline(std::cin, this->Contacts[i].last_name);
	if (this->Contacts[i].last_name == "\0")
		std::cout << "Field cannot be empty !" << std::endl;
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, this->Contacts[i].nickname);
	if (this->Contacts[i].nickname == "\0")
		std::cout << "Field cannot be empty !" << std::endl;
	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin, this->Contacts[i].darkest_secret);
	if (this->Contacts[i].darkest_secret == "\0")
		std::cout << "Field cannot be empty !" << std::endl;
	i++;
	if(i > 7)
		i = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	
}
