/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:04 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/25 18:34:01 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
//#include "Contact.hpp"
#include <string>
#include <iomanip>

int PhoneBook::i = 0;

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::search(void)
{
	int	index = 0;
	std::string dex;
	std::string rander;
 	std::cout.flags (std::ios::right);
    std::cout << std::setw(10) << "Index"  << "|";
    std::cout << std::setw(10) << "Fist Name"  << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
	pos = 0;
	while (pos < 8)
	{
		if (Contacts[pos].getFname().empty())
			break;
    	std::cout << std::setw(10) << pos << "|";
		rander = Contacts[pos].getFname();
		if (rander.length() > 10)
		{
			rander = rander.substr(0,10);
			rander[9] = '.';
			std::cout << std::setw(10) << rander << "|";
		}
		else
			std::cout << std::setw(10) << Contacts[pos].getFname() << "|";
		rander = Contacts[pos].getLname();
		if (rander.length() > 10)
		{
			rander = rander.substr(0,10);
			rander[9] = '.';
			std::cout << std::setw(10) << rander << "|";
		}
		else
			std::cout << std::setw(10) << Contacts[pos].getLname() << "|";
		rander = Contacts[pos].getNname();
		if (rander.length() > 10)
		{
			rander = rander.substr(0,10);
			rander[9] = '.';
			std::cout << std::setw(10) << rander << "|" << std::endl;
		}
		else
		std::cout << std::setw(10) << Contacts[pos].getNname() << std::endl; 
		pos++;
	}
	std::cout << "Choose an index" << std::endl;
	std::cin >> dex;
	index = std::atoi(dex.c_str());
	if (index < 0 || index >= pos || isdigit(pos) != 0)
	{
		std::cout << "Wrong Index !" << std::endl;
		return ; 
	}
	this->Contacts[index].displayInfo();
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
		this->Contacts[i].setNumber("");
		return ;
	}
	std::cout << "Last Name: " << std::endl;
	std::getline(std::cin, input);
	this->Contacts[i].setLname(input);
	if (this->Contacts[i].getLname().empty())
	{
		std::cout << "Field cannot be empty !" << std::endl;
		this->Contacts[i].setNumber("");
		this->Contacts[i].setFname("");
		return ;
	}
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, input);
	this->Contacts[i].setNname(input);
	if (this->Contacts[i].getNname().empty())
	{
		std::cout << "Field cannot be empty !" << std::endl;
		this->Contacts[i].setNumber("");
		this->Contacts[i].setFname("");
		this->Contacts[i].setLname("");
		return ;
	}
	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin, input);
	this->Contacts[i].setDsecret(input);
	if (this->Contacts[i].getDsecret().empty())
	{
		std::cout << "Field cannot be empty !" << std::endl;
		this->Contacts[i].setNumber("");
		this->Contacts[i].setFname("");
		this->Contacts[i].setLname("");
		this->Contacts[i].setNname("");
		return ;
	}
	i++;
	if(i > 7)
		i = 0;
	return;
}