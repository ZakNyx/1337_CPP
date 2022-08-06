/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:44:50 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/06 18:41:14 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	try {
		Bureaucrat test0(150, "Zak");
		test0.increment();
		std::cout << test0.getName() << " " <<test0.getGrade() << std::endl;
		test0.decrement();
		std::cout << test0.getName() << " " <<test0.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat test1(1, "The less clever Zak");
		test1.decrement();
		std::cout << test1.getName() << " " << test1.getGrade() << std::endl;
		test1.increment();
		std::cout << test1.getName() << " " << test1.getGrade() << std::endl;
		test1.increment();
		std::cout << test1.getName() << " " << test1.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat test2(151, "Zakn't");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try {
		Bureaucrat test3(0, "Zakn't");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}