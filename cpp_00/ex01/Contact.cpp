/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:00 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/21 20:04:33 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
    // fill_class();
    // std::cout << "Your name is "<< this->first_name << std::endl;
}

Contact::~Contact()
{
    std::cout << "Destructor" << std::endl;
    return;
}

