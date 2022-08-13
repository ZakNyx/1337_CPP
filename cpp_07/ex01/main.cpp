/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:18:57 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/13 17:03:16 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



void str_toupper(std::string str)
{
	unsigned long i = 0;

	while(str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	std::cout << str;
}

template < typename type >
type	iter(type *arr, type size, type func()){
	int i = 0;
	while (i < size)
	{
		arr[i] = func(arr[i]);
		i++;
	}
}

int main( void ){
	::iter ("ABx", 4, str_toupper);
	
}