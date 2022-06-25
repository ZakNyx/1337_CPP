/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:04 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/24 20:18:54 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <string>
#include <iomanip>

int PhoneBook::i = 0;

PhoneBook::PhoneBook(void)
{
	
}

PhoneBook::~PhoneBook(void)
{
	
}

void	PhoneBook::search(void)
{
 	std::cout.flags (std::ios::right);
    std::cout << std::setw(10)  << "Index"  << "|";
    std::cout << std::setw(10)  << "Fist Name"  << "|";
    std::cout << std::setw(10)  <<  "Last Name" << "|";
    std::cout << std::setw(10)  << "Nickname" << std::endl;
	pos = 0;
	this->Contacts[pos].displayInfo();
}

void	PhoneBook::add(void)
{
	std::string input;
	std::cout << "Number: " << std::endl;
	std::getline(std::cin, input);
	this->Contacts[i].setNumber(input);
	if (this->Contacts[i].getNumber().empty())
	{
		std::cout << "Field cannot be empty !" << std::endl;
		return ;
	}
	std::cout << "First Name: " << std::endl;
	std::getline(std::cin, input);
	this->Contacts[i].setFname(input);
	if (this->Contacts[i].getFname().empty())
	{
		std::cout << "Field cannot be empty !" << std::endl;
		return ;
	}
	std::cout << "Last Name: " << std::endl;
	std::getline(std::cin, input);
	this->Contacts[i].setLname(input);
	if (this->Contacts[i].getLname().empty())
	{
		std::cout << "Field cannot be empty !" << std::endl;
		return ;
	}
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, input);
	this->Contacts[i].setNname(input);
	if (this->Contacts[i].getnname().empty())
	{
		std::cout << "Field cannot be empty !" << std::endl;
		return ;
	}
	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin, input);
	this->Contacts[i].setDsecret(input);
	if (this->Contacts[i].getDsecret().empty())
	{
		std::cout << "Field cannot be empty !" << std::endl;
		return ;
	}
	i++;
	if(i > 7)
		i = 0;
	return;
}