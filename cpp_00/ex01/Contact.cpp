/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:00 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/25 18:33:59 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Contact.hpp"
# include <iomanip>

Contact::Contact()
{
    return ;
}

Contact::~Contact()
{
    return ;
}

void    Contact::displayInfo( void )
{
    std::cout.flags (std::ios::right);
    std::cout << "Number: " << getNumber() << std::endl;
    std::cout << "First Name: " << getFname() << std::endl;
    std::cout << "Last Name: " << getLname() << std::endl;
    std::cout << "Nickname: " << getNname() << std::endl;
    std::cout << "Darkest Secret: " << getDsecret() << std::endl;
}