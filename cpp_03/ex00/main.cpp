/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:22:55 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/31 11:33:55 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    
    ClapTrap Z("Zak");
    ClapTrap X("Dummy");
    
    Z.attack("Dummy");
    X.takeDamage(10);
    Z.takeDamage(2);
    Z.beRepaired(12);
}