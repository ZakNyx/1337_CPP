/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:24:19 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/08 19:58:27 by zihirri          ###   ########.fr       */
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
	*this = _p1;
	this->_target = _target;
	
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (executor);
}
