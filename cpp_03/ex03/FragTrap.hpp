/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:10:49 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/01 18:17:40 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
	protected:
		const static unsigned int	_hitPoint = 100;
		const static unsigned int	_attackDamage = 30;
	public:
		FragTrap( void );
		FragTrap(std::string name);
		FragTrap(FragTrap const & _p1);
		FragTrap & operator = (const FragTrap & _p1);
		~FragTrap( void );
		void    highFivesGuys( void );
};
#endif