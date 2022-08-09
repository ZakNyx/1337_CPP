/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:19:14 by zak               #+#    #+#             */
/*   Updated: 2022/08/09 17:25:51 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}
void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	return_level(std::string level)
{
	int			i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while ( i < 4 )
	{
		if (level == levels[i])
			return (i);
		i++;
	}
	return (-1);
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*function_pointer[])();
	function_pointer scream = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int n = return_level(level);
	
	while (n < 4)
	{
		switch (n)
		{
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				(this->*scream[n])();
				std::cout << std::endl;
				break;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				(this->*scream[n])();
				std::cout << std::endl;
				break;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				(this->*scream[n])();
				std::cout << std::endl;
				break;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				(this->*scream[n])();
				std::cout << std::endl;
				break;
			case -1:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				return;
		}
		n++;
	}
}