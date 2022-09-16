/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:22:55 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/10 15:16:41 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
    
    ClapTrap z("Zak");
    ScavTrap s("DummyTwo");
    FragTrap x("Dummy");
    z.attack("Dummy");
    s.attack("Zak");
    x.attack("DummyTwo");
    x.highFivesGuys();
}