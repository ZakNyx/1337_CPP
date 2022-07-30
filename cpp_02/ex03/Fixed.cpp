/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:33:36 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/29 22:53:24 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_Fractional = 8;

Fixed::Fixed( void ) {
	this->_Number = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& _n1 ){
	//std::cout << "Copy constructor called" << std::endl;
	_Number = _n1.getRawBits();
}

Fixed::Fixed( const int _Number ){
	this->_Number = _Number << this->_Fractional;
}

Fixed::Fixed( const float _Number ){
	this->_Number = roundf(_Number * (1 << this->_Fractional));
}

Fixed& Fixed::operator=( Fixed const & _n1 ){
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_Number = _n1.getRawBits();
	
	return *this;
}

/* Comparison Operators */
int	Fixed::operator > (Fixed const & _n1){
	if (this->_Number > _n1.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator >= (Fixed const & _n1){
	if (this->_Number >= _n1.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator < (Fixed const & _n1){
	if (this->_Number < _n1.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator <= (Fixed const & _n1){
	if (this->_Number <= _n1.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator == (Fixed const & _n1)
{
	if (this->_Number == _n1.getRawBits())
		return (1);
	else
		return (0);
}

int	Fixed::operator != (Fixed const & _n1)
{
	if (this->_Number != _n1.getRawBits())
		return (1);
	else
		return (0);
}

/* Arithmetic Operators */
Fixed	Fixed::operator * (Fixed const & _n1){
	Fixed multi;

	multi._Number = (this->toFloat() * _n1.toFloat()) * (1 << _Fractional);
	return (multi);	
}

Fixed	Fixed::operator - (Fixed const & _n1){
	Fixed sub;

	sub._Number = (this->toFloat() - _n1.toFloat()) * (1 << _Fractional);
	return (sub);	
}

Fixed	Fixed::operator + (Fixed const & _n1){
	Fixed sum;

	sum._Number = (this->toFloat() + _n1.toFloat()) * (1 << _Fractional);;
	return (sum);	
}

Fixed	Fixed::operator / (Fixed const & _n1){
	Fixed div;

	div._Number = (this->toFloat() / _n1.toFloat()) * (1 << _Fractional);;
	return (div);	
}

/* Increment/Decrement  Operators */
// Pre
Fixed	Fixed::operator ++ ( void ){
	Fixed inc;
	
	inc._Number = ++this->_Number;
	return (inc);
}

Fixed	Fixed::operator -- ( void ){
	Fixed dec;
	
	dec._Number = ++this->_Number;
	return (dec);
}

//Post
Fixed	Fixed::operator ++( int ){
	Fixed inc;
	
	inc._Number = this->_Number++;
	return (inc);
}

Fixed	Fixed::operator -- ( int ){
	Fixed dec;
	
	dec._Number = this->_Number--;
	return (dec);
}

const Fixed	Fixed::min( Fixed const & _n1, Fixed const & _n2 ){
	if (_n1._Number < _n2._Number)
		return (_n1);
	else
		return (_n2);
}

Fixed	Fixed::min( Fixed & _n1, Fixed & _n2 ){
	if (_n1._Number < _n2._Number)
		return (_n1);
	else
		return (_n2);
}

const Fixed	Fixed::max( Fixed const & _n1, Fixed const & _n2 ){
	if (_n1._Number > _n2._Number)
		return (_n1);
	else
		return (_n2);
}

Fixed	Fixed::max( Fixed & _n1, Fixed & _n2 ){
	if (_n1._Number > _n2._Number)
		return (_n1);
	else
		return (_n2);
}

std::ostream & operator << (  std::ostream & os, Fixed const & _n1 ){
	os<<_n1.toFloat();
	return (os);
}

float   Fixed::toFloat( void ) const{
	return (this->_Number / (float)(1 << this->_Fractional));
}

int		Fixed::toInt( void ) const{
	return (this->_Number >> this->_Fractional);
}

void    Fixed::setRawBits( int const raw ){
	this->_Number = raw;
}

Fixed::~Fixed( void ){
	//std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void ) const{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_Number);
}
