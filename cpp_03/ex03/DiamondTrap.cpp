/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:53:44 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/01 19:38:31 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){}

DiamondTrap::DiamondTrap(std::string name){
    _Name= name;
    ClapTrap::_Name= name+"_clap_name";
    this->_Health = _hitPoint;
    this->_Energy = _energyPoint;
    this->_Damage = _attackDamage;
    std::cout << "DiamondTrap Here" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & _p1){
    _Name = _p1._Name;
    ClapTrap::_Name= _Name +"_clap_name";
    _Health = _p1._hitPoint;
    _Energy = _p1._energyPoint;
    _Damage = _p1._attackDamage;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap & _p1){
    _Name = _p1._Name;
    ClapTrap::_Name= _Name +"_clap_name";
    _Health = _p1._hitPoint;
    _Energy = _p1._energyPoint;
    _Damage = _p1._attackDamage;
    
    return *this;
}
void DiamondTrap::whoAmI( void ){
    std::cout << "I am" << _Name << ClapTrap::_Name << std::endl;
}

DiamondTrap::~DiamondTrap( void ){
    std::cout << "DiamondTrap out !" << std::endl;
}
