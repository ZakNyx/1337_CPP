/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:23:40 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/02 18:58:03 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include <iostream>
#include <string.h>

class Dog: public Animal{
    public:
        Dog( void );
		~Dog( void );
		Dog(Dog const & _p1);
		Dog & operator = (Dog const & _p1);
		void makeSound( void ) const;
};
#endif