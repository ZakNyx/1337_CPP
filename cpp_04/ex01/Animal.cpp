/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:07:12 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/02 18:55:47 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ){
	this->type = "Animal";
	std::cout << "Animal Constructor Called !" << std::endl;
}

Animal::~Animal( void ){
	std::cout << "Animal Destructor Called !" << std::endl;
}

Animal::Animal(Animal const & _p1){
	this->type = _p1.type;
}

Animal & Animal::operator = (Animal const & _p1){
	this->type = _p1.type;
	return (*this);
}

std::string	Animal::getType( void ) const{
	return (this->type);
}

void    Animal::makeSound( void ) const{
	std::cout << "Any Animal Sound . . ." << std::endl; 
}