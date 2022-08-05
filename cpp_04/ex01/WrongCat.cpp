/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:31:46 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/02 19:34:50 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ){
    this->type = "WrongCat";
    std::cout << "WrongCat Constructor Called !" << std::endl;
}

WrongCat::~WrongCat( void ){
    std::cout << "WrongCat Destructor Called !" << std::endl;
}

WrongCat::WrongCat(WrongCat const & _p1){
    this->type = _p1.type;
}

WrongCat & WrongCat::operator = (WrongCat const & _p1){
    this->type = _p1.type;
    return (*this);
}

void WrongCat::makeSound( void ) const{
    std::cout << "Any WrongCat Sound . . ." << std::endl; 
}