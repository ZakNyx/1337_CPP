/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:20:19 by zak               #+#    #+#             */
/*   Updated: 2022/07/07 19:38:39 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	
	public:
		const std::string	getType() const;
		void 				setType(std::string newType);
		
		Weapon( std::string type );
		
		Weapon( void );
		~Weapon( void );
};

#endif /* WEAPON.HPP */