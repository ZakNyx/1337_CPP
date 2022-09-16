/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:44:50 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/12 12:53:51 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main( void )
{
	try {
		Bureaucrat test0(15, "John Doe 1");
		Form form("Random Form 1", 10, 10);
		test0.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << std::endl;
	try {
		Bureaucrat test0(10, "John Doe 2");
		Form form("Random Form 2", 10, 10);
		test0.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << std::endl;
	try {
		Bureaucrat test0(9, "John Doe 3");
		Form form("Random Form 3", 10, 10);
		test0.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}