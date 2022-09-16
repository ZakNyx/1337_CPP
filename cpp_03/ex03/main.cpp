/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:22:55 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/10 12:12:13 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main(void){
    ScavTrap    test("First");
    DiamondTrap d("Zak");
    d.whoAmI();
    d.attack("Dummy");
}