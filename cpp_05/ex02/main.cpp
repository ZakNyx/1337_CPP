/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:44:50 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/01 19:10:34 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
	try {
		ShrubberyCreationForm	chajara("chajara");
		Bureaucrat test0(149, "Zak");
		test0.signForm(chajara);
		test0.executeForm(chajara);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}