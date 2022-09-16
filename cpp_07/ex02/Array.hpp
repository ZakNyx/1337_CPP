/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:24:59 by zak               #+#    #+#             */
/*   Updated: 2022/09/14 18:45:38 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array{
	
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array( void ) : _array(nullptr), _size(0){};

		Array(unsigned int n): _array(new T[n]()), _size(n){};

		Array(Array const & _p1): _array(new T[_p1._size]), _size(_p1._size){
			unsigned int _s = 0;
			while (_s < _p1._size){
				this->_array[_s] = _p1._array[_s];
				_s++;
			}
		};
		
		Array & operator = (Array const & _p1){
			unsigned int _s = 0;
			delete[] this->_array;
			this->_array = new T[_p1._size];
			this->_size = _p1._size;
			while (_s < _p1._size){
				this->_array[_s] = _p1._array[_s];
				_s++;
			}
			return (*this);
		};
		
		class Objection : public std::exception{
			public :
				virtual const char * what() const throw(){
					return ("The Index is out of bound !");
				};
		};
		
		T & operator [] ( unsigned int position){
			if( this->_size <= position ){
				throw Objection();
			}
			return (this->_array[position]);
		}
		
		unsigned int	getSize( void ){
			return (this->_size);
		};
		
		~Array( void ){
			delete[] this->_array;
		};
};

#endif