/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:39:03 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/23 00:51:37 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
int main(void)
{
    std::string mode;
    while(1)
    {
        std::getline(std::cin, mode);
        if (mode == "ADD")
            PhoneBook Test;
        if (mode == "EXIT")
            std::exit(0);
        Contact contact()
        
    }

    return (0);
}