/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:10:45 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/10 15:19:11 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ){	std::cout<< "FragTrap here !" << std::endl;}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_Health = 100;
	_Energy = 100;
	_Damage = 30;
	std::cout<< "FragTrap here !" << std::endl;
}

FragTrap::~FragTrap( void ){
	std::cout<< "FragClap out !	" << std::endl;
}

FragTrap::FragTrap(FragTrap const & _p1){
	_Name = _p1._Name;
    _Health = _p1._Health;
    _Energy = _p1._Energy;
    _Damage = _p1._Damage;	
}

FragTrap & FragTrap::operator = (const FragTrap & _p1){
    _Name = _p1._Name;
    _Health = _p1._Health;
    _Energy = _p1._Energy;
    _Damage = _p1._Damage;
    
    return (*this);
}

void	FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->_Name << " is requesting some High Fives!" << std::endl;
}

