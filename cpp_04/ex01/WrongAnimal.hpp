/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:32:01 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/06 17:40:21 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>
#include <string.h>

class WrongAnimal{
	protected :
		std::string type;
	public :
		WrongAnimal( void );
		~WrongAnimal( void );
		WrongAnimal(WrongAnimal const & _p1);
		WrongAnimal & operator = (WrongAnimal const & _p1);
		std::string getType( void ) const;
		virtual void makeSound( void ) const;
};

#endif //WRONGANIMAL_HPP