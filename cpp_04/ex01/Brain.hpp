/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:07:18 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/04 16:59:43 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#  define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
	private:
		std::string	ideas[100];
	public:
		Brain( void );
		Brain(Brain const & _p1);
		Brain & operator = (Brain const & _p1);
		~Brain( void );
		
};

#endif