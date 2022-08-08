/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:19:48 by zak               #+#    #+#             */
/*   Updated: 2022/08/08 11:31:41 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
		std::string name;
		Weapon		*weaponB;
	
	public:
		void		attack(void);
		
		void		setWeapon( Weapon &newWeapon );
		
		std::string getName();
		void		setName(std::string name);
		
		HumanB(std::string name);
		~HumanB(void);
};

#endif /* HUMANA_HPP */