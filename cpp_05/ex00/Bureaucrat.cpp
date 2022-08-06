/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:44:21 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/06 16:16:02 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ){
	std::cout << "Bureaucrat constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat( int grade )
{
	if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else if ( grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	std::cout << "Bureaucrat !" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & _p1): _name(_p1._name){
	this->_grade = _p1._grade;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & _p1){
	this->_grade = _p1._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << "Bureaucrat destructor Celled" << std::endl;
}

std::string Bureaucrat::getName( void ) const {
	return (this->_name);
}

int Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void	Bureaucrat::increment( void ){
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrement( void ){
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

char* Bureaucrat::GradeTooHighException::what( void ){
	std::cout << "Grade is too High !" << std::endl;
}

char* Bureaucrat::GradeTooLowException::what( void ){
	std::cout << "Grade is too Low !" << std::endl;
}

std::ostream & operator << (  std::ostream & os, Bureaucrat const & _n1 ){
	os << _n1;
	return (os);
}