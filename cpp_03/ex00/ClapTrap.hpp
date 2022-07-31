/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:22:49 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/31 11:23:50 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
	
	private:
		std::string _Name;
		int			_Health;
		int			_Energy;
		int			_Damage;
		
	public:
		ClapTrap( void );
		ClapTrap(std::string name);
		ClapTrap (ClapTrap const & _p1);
		~ClapTrap ( void );
		ClapTrap & operator= (const ClapTrap & _p1);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

#endif