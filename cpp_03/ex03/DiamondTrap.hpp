/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:53:47 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/01 19:02:45 by zihirri          ###   ########.fr       */
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
		void	whoAmI();
};
#endif // DIAMONDTRAP_HPP