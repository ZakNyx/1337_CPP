/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:58:56 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/01 17:25:15 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(17);
	sp.addNumber(17);
	// sp.addNumber(1);
	// sp.addNumber(17);
	// sp.addNumber(3);
	// std::vector<int> test;
	// test.push_back(10);
	// test.push_back(20);
	// test.push_back(30);
	// sp.fillSpan(test);
	try{
	 	std::cout << sp.shortestSpan() << std::endl;
	 }
	catch (std::exception &e){
	 	std::cout << e.what();
	}
}