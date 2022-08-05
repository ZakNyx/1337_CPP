/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:23:36 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/04 17:41:56 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ){
	newBrain = new Brain();
	this->type = "Dog";
	std::cout << "Dog Constructor Called !" << std::endl;
}

Dog::~Dog( void ){
	std::cout << "Dog Destructor Called !" << std::endl;
	delete(newBrain);
}

Dog::Dog(Dog const & _p1){
	this->type = _p1.type;
}

Dog & Dog::operator = (Dog const & _p1){
	this->type = _p1.type;
	return (*this);
}

void Dog::makeSound( void ) const{
	std::cout << "Any Dog Sound . . ." << std::endl; 
}