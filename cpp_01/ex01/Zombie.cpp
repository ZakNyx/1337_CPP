/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:56:10 by zak               #+#    #+#             */
/*   Updated: 2022/07/01 18:58:48 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "const" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << std::endl;
}

void Zombie::setName(std::string zname)
{
	name = zname;
}

std::string Zombie::getName()
{
	return name;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}