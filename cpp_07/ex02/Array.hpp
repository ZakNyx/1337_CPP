/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:25:52 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/30 15:50:42 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array{
	
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array( void ) : _array(new T[]()), _size(0){};

		Array(unsigned int n): _array(new T[n]()), _size(n){};

		Array(Array const & _p1){
			unsigned int _s = 0;
			this->_array = new T(_p1._size);
			this->_size = _p1._size;
			while (i < _p1._size){
				this->_array[i] = _p1._array[i];
				i++;
			}
		};
		
		Array & operator = (Array const & _p1){
			unsigned int _s = 0;
			this->_array = new T(_p1._size);
			this->_size = _p1._size;
			while (i < _p1._size){
				this->_array[i] = _p1._array[i];
				i++;
			}
			this (*this);
		};
		
		class Objection : public std::exception{
			public :
				virtual const char * what() const throw(){
					std::cout << "The Index is out of bound !" << std::endl;
				};
		};
		
		T & operator [] ( unsigned int position){
		try{
			if( this->_size <= position ){
				throw Objection();
			}
			return (this._array[position]);
         }
		}
		
		unsigned int	getSize( void ){
			return (this->_size);
		};
		
		~Array( void ){
			delete this->_array;
		};
};

#endif