/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:24:27 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/09 15:30:07 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( void ){}

RobotomyRequestForm::RobotomyRequestForm( std::string Target ) : Form("RobotomyRequestForm", 72, 45){
	this->_target = Target;
}

RobotomyRequestForm::RobotomyRequestForm ( RobotomyRequestForm const & _p1) : Form(_p1) {
	this->_target = _p1._target;	
}

RobotomyRequestForm & RobotomyRequestForm::operator = ( RobotomyRequestForm const & _p1 ) {
	this->_target = _p1._target;
	
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if(this->getIsSigned() == false)
		throw(Form::FormNotSigned());
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		srand(time(NULL));
		bool tf = (rand() % 2);
			std::cout << "Oink Oink Oink Oink ! " << std::endl;
		if (tf)
			std::cout << this->_target << " has been successfully robotomized !" << std::endl;
		else 
			std::cout << this->_target << " failed to robotomize !" << std::endl;
	}
	else
		throw(Bureaucrat::GradeTooLowException());
}

RobotomyRequestForm::~RobotomyRequestForm( void ){}
