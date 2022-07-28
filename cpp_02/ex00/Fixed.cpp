/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:44:22 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/28 17:23:26 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_Fractional = 8;

Fixed::Fixed( void ) {
    this->_Number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& _n1)
{
    std::cout << "Copy constructor called" << std::endl;
    _Number = _n1.getRawBits();
}

Fixed& Fixed::operator=(Fixed const & _n1)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_Number = _n1.getRawBits();
    
    return *this;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_Number);
}

void    Fixed::setRawBits( int const raw )
{
    this->_Number = raw;
}