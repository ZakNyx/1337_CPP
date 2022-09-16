/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:22:55 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/10 15:08:03 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    
    ClapTrap Z("Zak");
    ClapTrap X("Dummy");
    
    // Z.attack("Dummy");
    // Z.attack("Dummy");
    // Z.attack("Dummy");
    // Z.attack("Dummy");
    // Z.attack("Dummy");
    // Z.attack("Dummy");
    // Z.attack("Dummy");
    // Z.attack("Dummy");
    // Z.attack("Dummy");
    // Z.attack("Dummy");
    // Z.attack("Dummy");

    X.takeDamage(10);
    Z.takeDamage(2);
    Z.beRepaired(12);
    X.beRepaired(10);
    X.attack("Zak");
    Z.takeDamage(0);
    Z.beRepaired(2);
}