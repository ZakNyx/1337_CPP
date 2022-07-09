/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:10:08 by zak               #+#    #+#             */
/*   Updated: 2022/07/08 19:33:22 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class	Replace
{
	public:
		void run( std::string oldStr, std::string newStr, std::string fileName );
		
		Replace( void );
		~Replace( void );
};

#endif /* REPLACE_HPP */  