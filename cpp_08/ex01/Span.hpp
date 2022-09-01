/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:47:05 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/01 17:25:42 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span{
	private:
		std::vector<int> vec;
		unsigned int	_store;
	public:
		Span( void );
		Span(unsigned int _n);
		Span(Span const & _p1);
		Span & operator = (Span const & _p1);

		void	addNumber(unsigned int add);
		void	fillSpan(std::vector<int> values);
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );
		class TooManyElements : public std::exception{
			public :
				virtual const char * what() const throw(){
					return ("Too Many Elements !");
			};
		};

		class NoNumberStored : public std::exception{
			public :
				virtual const char * what() const throw(){
					return ("There are no or only one number stored !");
			};
		};
		void printVector();
		~Span( void );
};
#endif // SPAN_HPP