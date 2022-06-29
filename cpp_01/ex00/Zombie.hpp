/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:26:39 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/28 21:26:49 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    
    
    private:
        std::string name;
    
    public:
        void    announce( void );

        Zombie( std::string name );
        ~Zombie( void );
};

#endif /* ZOMBIE_HPP */