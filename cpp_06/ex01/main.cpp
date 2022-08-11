/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:22:06 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/11 16:57:49 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t   serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

int main( void )
{
	Data *ptr = NULL;
	
	std::cout << serialize(ptr)          << std::endl;
}