/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:19:36 by zak               #+#    #+#             */
/*   Updated: 2022/09/05 11:50:46 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void)
{
	if (!this->weaponB)
    {
        std::cout << this->name << " is unable to attack" << std::endl;
        return ;
    }
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