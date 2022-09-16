/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:58:56 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/15 15:53:50 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try{
		int	const				amounts[]	= { 150, 87,68, 8, 98756, 680, 89, 1000000, 1000001, 987, 987978 };
		size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
		std::vector<int>		myvector( amounts, amounts + amounts_size );
		
		Span sp = Span(sizeof(amounts) / sizeof(int));
		 sp.addNumber(myvector);
		 	std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e){
	 	std::cout << e.what();
	}
}