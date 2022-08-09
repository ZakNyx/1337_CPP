/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:55:40 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/09 13:25:55 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Form::Form(void) : _gradeToSigne(1), _gradeToExecute(1) {
	std::cout << "Form !" << std::endl;
}

Form::Form(std::string name, const int gts, const int gte) : _name(name), _gradeToSigne(gts), _gradeToExecute(gte), _isSigned(false){
	if (gts > 150 || gte > 150)
		throw Form::GradeTooLowException();
	else if (gts < 1 || gte < 1)
		throw Form::GradeTooHighException();
	std::cout << this->_name << "'s constructor has been called !" << std::endl;
}

Form::Form(Form const &_p1) : _name(_p1._name), _gradeToSigne(_p1._gradeToSigne), _gradeToExecute(_p1._gradeToExecute), _isSigned(_p1._isSigned) {}

Form &Form::operator=(Form const &_p1){
	this->_name = _p1._name;
	this->_isSigned = _p1._isSigned;
	return (*this);
}

std::string Form::getName(void) const{
	return (this->_name);
}

bool Form::getIsSigned(void) const{
	return (this->_isSigned);
}

int Form::getGradeToSigne(void) const{
	return (this->_gradeToSigne);
}

int Form::getGradeToExecute(void) const{
	return (this->_gradeToExecute);
}

const char *Form::GradeTooHighException::what() const throw(){
	return "Grade is too High !";
}

const char *Form::GradeTooLowException::what() const throw(){
	return "Grade is too Low !";
}

const char *Form::FormNotSigned::what() const throw(){
	return "Form isn't Signed !";
}

void Form::beSigned(Bureaucrat &prsn){
	if (prsn.getGrade() >= this->_gradeToSigne)
		throw Form::GradeTooLowException();
	else if (prsn.getGrade() <= this->_gradeToSigne)
		this->_isSigned = true;
}

Form::~Form(void){
	std::cout << this->_name << "'s desctructor has been called !" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Form const &_n1){
	os << _n1.getName() << " " << _n1.getIsSigned() << " " << _n1.getGradeToExecute() << " " << _n1.getGradeToSigne();
	return (os);
}