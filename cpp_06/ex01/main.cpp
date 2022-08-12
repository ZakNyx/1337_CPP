/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:22:06 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/12 12:03:08 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t   serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

int main( void )
{
	Data		ptr;
	uintptr_t	before;
	Data		*after;
	
	ptr._dataInt = 1337;
	ptr._dataStr = "Hello";
	
	std::cout << "Before Serialization / Deserialization : " << ptr._dataInt << " " << ptr._dataStr <<  std::endl;
	
	before  = serialize(&ptr);
	after = deserialize(before);
	
	std::cout << "After Serialization / Deserialization : " << after->_dataInt << " " << after->_dataStr <<  std::endl;
}