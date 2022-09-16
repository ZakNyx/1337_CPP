/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:32:15 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/11 15:07:58 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{ 
    public:
        WrongCat( void );
		~WrongCat( void );
		WrongCat(WrongCat const & _p1);
		WrongCat & operator = (WrongCat const & _p1);
		void makeSound( void ) const;
};
#endif