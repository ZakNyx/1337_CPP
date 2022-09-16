/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:27:39 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/13 20:04:25 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>     // std::cout
#include <algorithm>    // std::find_if
#include <vector>       // std::vector
#include "easyfind.hpp"

int main()
{
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	std::vector<int>		myvector( amounts, amounts + amounts_size );
	
	easyfind(myvector, 0); 

	return 0;
}