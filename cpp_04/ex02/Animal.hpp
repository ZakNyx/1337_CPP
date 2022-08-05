/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:07:16 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/04 21:40:15 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal{
	protected :
		std::string type;
	public :
		Animal( void );
		virtual ~Animal( void ) = 0;
		Animal(Animal const & _p1);
		Animal & operator = (Animal const & _p1);
		std::string getType( void ) const;
		virtual void makeSound( void ) const = 0;
};
#endif