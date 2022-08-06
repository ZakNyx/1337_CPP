/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:23:32 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/06 17:42:03 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat: public Animal{
	private:
		Brain *newBrain;
    public:
        Cat( void );
		virtual ~Cat( void );
		Cat(Cat const & _p1);
		Cat & operator = (Cat const & _p1);
		virtual void makeSound( void ) const;
};
#endif