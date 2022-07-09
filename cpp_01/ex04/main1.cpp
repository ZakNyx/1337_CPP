/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:40:20 by zak               #+#    #+#             */
/*   Updated: 2022/07/08 17:51:11 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main( int ac, char **av )
{
	std::string		oldStr;
	std::string 	newStr;
	std::string 	fileName;
	std::string		line;
	if (ac == 4)
	{
		fileName = av[1];
		oldStr = av[2];
		newStr = av[3];
		std::fstream	read (fileName);
		if(!read)
		{
			std::cout << "The file doesn't exist !" << std::endl; 	
			return (1);	
		}
		std::ofstream	write (fileName + ".replace");
		while(getline(read, line))
		{
			if (line == oldStr)
				write << newStr << std::endl;
			else
				write << line << std::endl;	
		}
	}
	else
		std::cout << "<filename> | S1 | S2" << std::endl;
	// std::fstream read ("read.txt");
	// std::fstream write ("write.txt");

	// std::string	line;
	// std::string bfr = "Test";
	// std::string aftr = "Aloha instead";
	// 

	return (0);
}