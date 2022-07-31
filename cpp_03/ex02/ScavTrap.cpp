/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:07:08 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/31 22:24:09 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	_Health = 100;
	_Energy = 50;
	_Damage = 20;
	std::cout<< "ScavTrap here !" << std::endl;
}

ScavTrap::~ScavTrap( void ){
	std::cout<< "ScavClap out !	" << std::endl;
}

void    ScavTrap::attack(const std::string& target){
	if (this->_Energy > 0){
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << " causing " << this->_Damage << " points of damage!" << std::endl;
		this->_Energy -= 1;
		std::cout << this->_Name << " Energy Left "  << this->_Energy << std::endl;
	}
	else{
		std::cout << "You have no energy left" << std::endl;
	}
}

ScavTrap::ScavTrap(ScavTrap const & _p1){
	_Name = _p1._Name;
    _Health = _p1._Health;
    _Energy = _p1._Energy;
    _Damage = _p1._Damage;	
}

ScavTrap & ScavTrap::operator = (const ScavTrap & _p1){
    _Name = _p1._Name;
    _Health = _p1._Health;
    _Energy = _p1._Energy;
    _Damage = _p1._Damage;
    
    return (*this);
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap entred the Gate Keeper mode !" << std::endl;
}

