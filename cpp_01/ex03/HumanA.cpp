/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:19:33 by zak               #+#    #+#             */
/*   Updated: 2022/09/02 12:33:51 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA()
{
	std::cout << "HumanA done !" << std::endl;
}

std::string HumanA::getName()
{
	return (this->name);
}

void HumanA::attack()
{
	std::cout << this->getName() << " attacks with his " << weapon.getType() << std::endl;
}