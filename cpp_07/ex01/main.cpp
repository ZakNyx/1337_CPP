/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:18:57 by zihirri           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/13 17:11:03 by zihirri          ###   ########.fr       */
=======
/*   Updated: 2022/08/14 17:05:57 by zak              ###   ########.fr       */
>>>>>>> cde67f7f4572ab02bd1d4012cfc3db76a9023290
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
type	iter(type &arr, type size, type func()){
	int i = 0;
	while (i < size)
	{
		arr[i] = func(arr[i]);
		i++;
	}
}

int main( void ){
	
	std::string a = "abc";
	::iter (a, 1, str_toupper);
	
}