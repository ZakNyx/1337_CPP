/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:25:55 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/06 17:31:14 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
   Zombie* zmb = newZombie("ZOMBIE_1");
   zmb->announce();
   delete(zmb);
   randomChump("ZOMBIE_2");
}