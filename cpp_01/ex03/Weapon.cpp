/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:20:16 by zak               #+#    #+#             */
/*   Updated: 2022/07/07 19:39:36 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->type = type;
}

const std::string Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}

Weapon::~Weapon( void )
{

}