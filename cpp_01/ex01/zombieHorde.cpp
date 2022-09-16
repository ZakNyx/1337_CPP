/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:56:14 by zak               #+#    #+#             */
/*   Updated: 2022/09/07 11:10:16 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if ( N < 0 )
		std::exit(1);
	Zombie *zmb = new Zombie[N];
	
	for (int i=0; i < N; i++)
		zmb[i].setName(name);
	return zmb;
}