/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:07:18 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/01 20:20:23 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	protected:
		const static unsigned int _energyPoint = 50;
	public:
		ScavTrap( void );
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & _p1);
		ScavTrap & operator = (const ScavTrap & _p1);
		~ScavTrap( void );
		void    attack(const std::string& target);
		void    guardGate();
};
#endif