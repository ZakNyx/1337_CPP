/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:25:55 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/29 15:40:44 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
   Zombie* zmb = newZombie("cimo");
   zmb->announce();
   delete(zmb);
   randomChump("jadjoud");
}