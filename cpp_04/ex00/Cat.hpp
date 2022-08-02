/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:23:32 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/02 18:58:09 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{ 
    public:
        Cat( void );
		~Cat( void );
		Cat(Cat const & _p1);
		Cat & operator = (Cat const & _p1);
		void makeSound( void ) const;
};
#endif