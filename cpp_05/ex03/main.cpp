/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:44:50 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/12 15:59:06 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern inter;
    Bureaucrat bureau(1, "John Doe");
    Form *a = inter.makeForm("RobotomyRequestForm","R2D2");
    Form *b = inter.makeForm("ShrubberyCreationForm","Tree");
    Form *c = inter.makeForm("PresidentialPardonForm","Obamna");

	std::cout << std::endl;
	bureau.signForm(*a);
	bureau.executeForm(*a);	
	std::cout << std::endl;
    bureau.signForm(*b);
	bureau.executeForm(*b);
	std::cout << std::endl;
    bureau.signForm(*c);
	bureau.executeForm(*c);
}