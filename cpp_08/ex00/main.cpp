/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:27:39 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/31 12:13:28 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>     // std::cout
#include <algorithm>    // std::find_if
#include <vector>       // std::vector
#include "easyfind.hpp"

int main()
{
	std::vector<int> myvector;

	myvector.push_back(16);
	myvector.push_back(16);
	myvector.push_back(40);
	myvector.push_back(55);
	
	easyfind(myvector, 15);

	return 0;
}