/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:53:44 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/01 22:45:17 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){
	std::cout << "DiamondTrap Here" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name){
	_Name= name;
	ClapTrap::_Name= name + "_clap_name";
	this->_Health = this->FragTrap::_hitPoint;
	this->_Energy = this->ScavTrap::_energyPoint;
	this->_Damage = this->FragTrap::_attackDamage;
	std::cout << "DiamondTrap Here !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & _p1){
	_Name = _p1._Name;
	ClapTrap::_Name= _Name +"_clap_name";
	_Health = _p1._Health;
	_Energy = _p1._Energy;
	_Damage = _p1._Damage;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap & _p1){
	_Name = _p1._Name;
	ClapTrap::_Name= _Name +"_clap_name";
	_Health = _p1._Health;
	_Energy = _p1._Energy;
	_Damage = _p1._Damage;
	
	return *this;
}

void DiamondTrap::whoAmI( void ){
	std::cout << "I am " << _Name <<" aka " << ClapTrap::_Name << std::endl;
}

void	DiamondTrap::attack(const std::string& target){
	this->ScavTrap::attack(target);	
}

DiamondTrap::~DiamondTrap( void ){
	std::cout << "DiamondTrap out !" << std::endl;
}
