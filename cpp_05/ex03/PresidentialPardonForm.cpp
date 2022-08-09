/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:24:19 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/09 15:31:27 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ){}

PresidentialPardonForm::PresidentialPardonForm( std::string Target ) : Form("PresidentialPardonForm", 25, 5){
	this->_target = Target;
}

PresidentialPardonForm::PresidentialPardonForm ( PresidentialPardonForm const & _p1) : Form(_p1) {
	this->_target = _p1._target;	
}

PresidentialPardonForm & PresidentialPardonForm::operator = ( PresidentialPardonForm const & _p1 ) {
	this->_target = _p1._target;
	
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if(this->getIsSigned() == false)
		throw(Form::FormNotSigned());
	if (executor.getGrade() <= this->getGradeToExecute())
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw(Bureaucrat::GradeTooLowException());
}

PresidentialPardonForm::~PresidentialPardonForm( void ){}
