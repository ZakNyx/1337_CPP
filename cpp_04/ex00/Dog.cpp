/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:23:36 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/02 18:57:58 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ){
    this->type = "Dog";
    std::cout << "Dog Constructor Called !" << std::endl;
}

Dog::~Dog( void ){
    std::cout << "Dog Destructor Called !" << std::endl;
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