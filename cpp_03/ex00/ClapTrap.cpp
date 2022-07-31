/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:22:43 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/31 11:33:33 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ){
    std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ):_Name(name), _Health(10), _Energy(10), _Damage(0) {}

ClapTrap::ClapTrap (ClapTrap const & _p1){
    _Name = _p1._Name;
    _Health = _p1._Health;
    _Energy = _p1._Energy;
    _Damage = _p1._Damage;
}

ClapTrap & ClapTrap::operator= (const ClapTrap & _p1)
{
    _Name = _p1._Name;
    _Health = _p1._Health;
    _Energy = _p1._Energy;
    _Damage = _p1._Damage;
    
    return (*this);
}

void    ClapTrap::attack(const std::string& target){
    if (this->_Energy > 0){
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->_Damage << " points of damage!" << std::endl;
        this->_Energy -= 1;
    }
    else{
        std::cout << "You have no energy left" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount){
        std::cout << "ClapTrap " << this->_Name << " recieved " << amount << " of damage." << std::endl;
        this->_Health -= amount;
        std::cout << "Actual HP: " << this->_Health << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->_Energy > 0){
        std::cout << "ClapTrap " << this->_Name << " Healed " << amount << std::endl;
        this->_Health += amount;
        std::cout << "Actual HP: " << this->_Health << std::endl;
        this->_Energy -= 1;
    }
    else{
        std::cout << "You have no energy left" << std::endl;
    }
}

ClapTrap::~ClapTrap( void ){
    std::cout << "Descructor Called" << std::endl;
}