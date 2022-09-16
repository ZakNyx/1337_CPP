/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:17:30 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/13 16:51:55 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
	srand(time(NULL));
	int	n;
	
	n = (int)(rand() % 3);
	if ( n == 0 )
		return (new A());
	else if ( n == 1 )
		return (new B());
	else
		return (new C());
}
	// Returns the adress or the value NULL if the dynamic cas† isn't possible
void	identify(Base* p){
	if (A* ptr = dynamic_cast<A*>(p))
		std::cout << "I am clearly Class A" << std::endl;
	else if (B* ptr = dynamic_cast<B*>(p))
		std::cout << "I am clearly Class B" << std::endl;
	else if (C* ptr = dynamic_cast<C*>(p))
		std::cout << "I am clearly Class C" << std::endl;
	else
		std::cout << "Check your input please KEKW" << std::endl;
}
// Throws an exception if the dynamic cast isn't possible  
void	identify(Base& p){
	try {
		A& ptr = dynamic_cast<A&>(p);
		std::cout << "I am clearly Class A" << std::endl;
		(void)ptr;
		return;
	}
	catch(std::bad_cast){
	}
	try {
		B& ptr = dynamic_cast<B&>(p);
		std::cout << "I am clearly Class B" << std::endl;
		(void)ptr;
		return;
	}
	catch(std::bad_cast){
	}
	try {
		C& ptr = dynamic_cast<C&>(p);
		std::cout << "I am clearly Class C" << std::endl;
		(void)ptr;
		return;
	}
	catch(std::bad_cast){
	}
}

int main(void){
	A	_A;
	B	_B;
	C	_C;

	identify(&_A);
	identify(&_B);
	identify(&_C);

	std::cout << std::endl;
	identify(generate());
	std::cout << std::endl;
	identify(_A);
	identify(_B);
	identify(_C);
}