/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:08:34 by zak               #+#    #+#             */
/*   Updated: 2022/08/08 15:49:14 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
	(void) av;
	if (ac == 4)
	{
		Replace r;
		
		r.run(av[2], av[3], av[1]);
	}
	else
		std::cout << "<filename> | S1 | S2" << std::endl;
	return (0);
}