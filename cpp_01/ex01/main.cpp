/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:56:06 by zak               #+#    #+#             */
/*   Updated: 2022/07/01 19:00:09 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main( void )
{
	Zombie *zmb;
	zmb = zombieHorde(10, "lmao");
	for (int i = 0; i < 10; i++)
		zmb[i].announce();

}