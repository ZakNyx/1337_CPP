/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:22:06 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/12 11:21:35 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t   serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

int main( void )
{
	Data *ptr;
	ptr->_dataInt = 1337;
	ptr->_dataStr = "Hello World !";
	uintptr_t test  = serialize(ptr);
	std::cout << "Int : " << ptr->_dataInt << "String :" << ptr->_dataStr << test << std::endl;
}