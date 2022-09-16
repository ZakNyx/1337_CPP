/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:47:00 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/15 15:45:56 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ){}

Span::Span( unsigned int _n) : _store(_n) {}

Span::Span(Span const & _p1){
	this->vec = _p1.vec;
	this->_store = _p1._store;
}

Span & Span::operator = (Span const & _p1){
	this->_store = _p1._store;
	this->vec = _p1.vec;
	return (*this);
}

void	Span::addNumber(unsigned int add){
	if(this->_store > this->vec.size())
		this->vec.push_back(add);
	else
		throw Span::TooManyElements();
}

unsigned int Span::shortestSpan(){
    if(this->vec.size() <= 1)
        throw TooManyElements();
    else
    {
        std::vector<int> vcopy(this->vec);
        std::sort(vcopy.begin(), vcopy.end());
        int shortestSpan = vcopy[1] - vcopy[0];
        for (unsigned int i = 2; i < vcopy.size(); i++)
        {
            if (vcopy[i] - vcopy[i - 1] < shortestSpan)
                shortestSpan = vcopy[i] - vcopy[i - 1];
        }
        return (shortestSpan);
    }
}

unsigned int    Span::longestSpan( void ){
	size_t max = 0;
	size_t min = 0;
	if (this->vec.empty() || this->vec.size() == 1)
		throw Span::NoNumberStored();
	else
	{
		max = *max_element(this->vec.begin(), this->vec.end());
		min = *min_element(this->vec.begin(), this->vec.end());
	}
	return (max - min);
}

void	Span::addNumber(std::vector<int> values){
	if (values.size() > this->_store)
		throw Span::TooManyElements();
	for	(std::vector<int>::iterator it = values.begin(); it != values.end(); it++){
		this->vec.push_back(*it);
	}
}

void    Span::printVector( void ){
	for (unsigned int i = 0; i < this->_store; i++) {
		std::cout << this->vec.at(i) << ' ';
	}
	std::cout << std::endl;
}

Span::~Span( void ){}