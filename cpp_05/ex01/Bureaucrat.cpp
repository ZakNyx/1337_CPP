/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:44:21 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/12 12:52:26 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ){
	std::cout << "Bureaucrat constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat( int grade, std::string name ) : _name(name)
{
	if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else if ( grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	std::cout << "Bureaucrat " << this->_name << "'s Constuctor has been called !" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & _p1): _name(_p1._name){
	this->_grade = _p1._grade;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & _p1){
	this->_grade = _p1._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << "Bureaucrat: " << this->getName() << "'s destructor Called" << std::endl;
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

void	Bureaucrat::decrement( void ) {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too High !";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too Low !";
}

void	Bureaucrat::signForm( Form & _p1 ){
	try{
		_p1.beSigned(*this);
		std::cout << this->getName() << " signed " << _p1.getName() << std::endl;
	}
	catch (std::exception & e){
		std::cout << this->getName() << " couldn't sign " << _p1.getName() << " because their " << e.what() << std::endl;
	}
}

std::ostream & operator << (  std::ostream & os, Bureaucrat const & _n1 ){
	os << _n1.getName();
	os << _n1.getGrade();
	return (os);
}