/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:06:04 by zak               #+#    #+#             */
/*   Updated: 2022/08/08 18:01:45 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace( void )
{
}

Replace::~Replace( void )
{
	std::cout << "Done" << std::endl;
}

void Replace::run(std::string oldStr, std::string newStr, std::string fileName)
{
	std::string line;
	std::string string;
	std::fstream read(fileName);
	unsigned long i = 0;
	
	if (!read)
	{
		std::cout << "The file doesn't exist !" << std::endl;
		return ;
	}
	std::ofstream write(fileName + ".replace");
	string.assign(std::istreambuf_iterator<char>(read), std::istreambuf_iterator<char>());
	unsigned long str = string.length();
	while ( i < str )
	{
		if (string.compare(i, oldStr.length(), oldStr) == 0)
		{
			std::cout << i << " " << str << " " << oldStr.length() << std::endl;
			string.erase(i, oldStr.length());
			string.insert(i, newStr);
		}
		i++;
	}
		write << string;
	//std::cout << string << std::endl;
	
}