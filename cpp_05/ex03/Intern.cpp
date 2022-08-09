/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:45:46 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/09 18:08:10 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ){
	std::cout << "Intern Spawned !" << std::endl;
}

Intern::Intern ( Intern const & _p1){}

Intern & Intern::operator = ( Intern const & _p1 ){return (*this);}

Form	*Intern::getShrubbery(std::string _target){
	return (new ShrubberyCreationForm(_target));
}

Form	*Intern::getPresidential(std::string _target){
	return (new PresidentialPardonForm(_target));
}

Form	*Intern::getRobotomy(std::string _target){
	return (new RobotomyRequestForm(_target));
}

Form	*Intern::makeForm(std::string _formName, std::string _target){
	typedef Form*		(Intern::*function_pointer[])(std::string);
	std::string			_forms[3] = { "ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm"};
	function_pointer	_form = { &Intern::getShrubbery, &Intern::getPresidential, &Intern::getRobotomy};
	int					n = 0;

	while ( n < 3 )
	{
		if ( _forms[n] == _formName  )
			return(this->*_form[n])(_target);
		n++;
	}
	std::cout << "Invalid form type !" << std::endl;
	return (NULL);
}

Intern::~Intern( void ){}