/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:22:55 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/10 15:11:40 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
    
    ClapTrap Z("Zak");
    ScavTrap x("Dummy");
    x.attack("Zak");
    Z.takeDamage(20);
    x.guardGate();
}