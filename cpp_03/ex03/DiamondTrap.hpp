/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:53:47 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/01 20:03:57 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	
	private:
		std::string _Name;
	
	public:
		DiamondTrap( void );
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & _p1);
		DiamondTrap & operator = (const DiamondTrap & _p1);
		~DiamondTrap( void );
		void    attack(const std::string& target);
		void	whoAmI();
};
#endif // DIAMONDTRAP_HPP