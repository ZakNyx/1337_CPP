/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:07:12 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/04 17:01:55 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "You have a brain now !" << std::endl;
}

Brain::~Brain( void ){
	std::cout << "Brain dead !" << std::endl;
}

Brain::Brain(Brain const & _p1){
	int	i = 0;
	while (i < 100)
	{
		this->ideas[i] = _p1.ideas[i];
		i++;
	}
}

Brain & Brain::operator = (Brain const & _p1){
	int	i = 0;
	while (i < 100)
	{
		this->ideas[i] = _p1.ideas[i];
		i++;
	}
	return (*this);
}