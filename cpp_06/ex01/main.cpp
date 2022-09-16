/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:22:06 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/13 16:39:59 by zihirri          ###   ########.fr       */
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
		
	before  = serialize(&ptr);
	after = deserialize(before);
	
	std::cout << "Serialize  : " << before << std::endl;
	std::cout << "Deserialize : " << after << std::endl;
	
	std::cout << after->_dataInt << " / " << after->_dataStr << std::endl;
}