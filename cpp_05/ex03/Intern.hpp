/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:45:48 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/09 18:05:04 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
class Intern {
	
	public:
	Intern( void );
	Intern ( Intern const & _p1);
	Intern & operator = ( Intern const & _p1 );
Form	*Intern::makeForm(std::string _formName, std::string _target);
	
	Form	*getShrubbery(std::string _target);
	Form	*getPresidential(std::string _target);
	Form	*getRobotomy(std::string _target);
	~Intern( void );
};
#endif