/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:23:28 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/07 16:40:32 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ){
	newBrain = new Brain();
	this->type = "Cat";
	std::cout << "Cat Constructor Called !" << std::endl;
}

Cat::~Cat( void ){
	std::cout << "Cat Destructor Called !" << std::endl;
	delete newBrain;
}

Cat::Cat(Cat const & _p1){
	this->type = _p1.type;
}

Cat & Cat::operator = (Cat const & _p1){
	this->newBrain = _p1.newBrain;
	this->type = _p1.type;
	return (*this);
}

void Cat::makeSound( void ) const{
	std::cout << "Any Cat Sound . . ." << std::endl; 
}