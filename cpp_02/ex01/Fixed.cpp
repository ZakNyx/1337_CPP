/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:33:36 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/28 19:04:41 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_Fractional = 8;

Fixed::Fixed( void ) {
	this->_Number = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& _n1)
{
	std::cout << "Copy constructor called" << std::endl;
	_Number = _n1.getRawBits();
}

Fixed::Fixed( const int _Number)
{
	
}

Fixed::Fixed(const float _Number)
{
	
}

Fixed& Fixed::operator=(Fixed const & _n1)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_Number = _n1.getRawBits();
	
	return *this;
}

std::ostream & operator<<(  std::ostream & os, Fixed const & _n1 )
{
	
}

float   Fixed::toFloat( void ) const{

}

int		Fixed::toInt( void ) const{
	return roundf(this->_Number);
}

void    Fixed::setRawBits( int const raw )
{
	this->_Number = raw;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_Number);
}
