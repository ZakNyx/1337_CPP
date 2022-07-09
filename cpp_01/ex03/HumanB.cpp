/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:19:36 by zak               #+#    #+#             */
/*   Updated: 2022/07/07 19:57:43 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << weaponB->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
	std::cout << "HumanB done !" << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	this->weaponB = &newWeapon;
}

std::string HumanB::getName()
{
	return (this->name);
}

void HumanB::setName(std::string name)
{
	this->name = name;
}