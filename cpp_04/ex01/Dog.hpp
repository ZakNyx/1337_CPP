/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:23:40 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/04 17:27:38 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string.h>

class Dog: public Animal{
	private:
		Brain *newBrain;
    public:
        Dog( void );
		~Dog( void );
		Dog(Dog const & _p1);
		Dog & operator = (Dog const & _p1);
		void makeSound( void ) const;
};
#endif