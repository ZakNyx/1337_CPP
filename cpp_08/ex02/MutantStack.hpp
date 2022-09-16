/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:44:08 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/15 15:55:25 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

template < typename T >
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		MutantStack( void ) : std::stack<T>(){};
		MutantStack(MutantStack const & _p1) : std::stack<T>(_p1) {};
		MutantStack & operator = (MutantStack const & _p1){
			std::stack<T>::operator=(_p1);
			return(*this);
		};
		
		iterator begin(){
			return(std::stack<T>::c.begin());
		};
		iterator end(){
			return(std::stack<T>::c.end());
		};

		reverse_iterator rbegin(){
			return(std::stack<T>::c.rbegin());
		};
		reverse_iterator rend(){
			return(std::stack<T>::c.rend());
		};
		~MutantStack( void ){};
};
#endif