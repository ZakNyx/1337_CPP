/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:37:23 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/20 19:03:17 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

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

int main(int ac, char **av){
	int i = 1;
	std::string	str;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(i < ac)
	{
		str = av[i];
		str_toupper(str);
		i++;
	}
	std::cout << std::endl;
}