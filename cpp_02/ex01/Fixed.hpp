/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:33:41 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/29 16:56:31 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
class Fixed
{
	private:
		int					_Number;
		static const int	_Fractional;

	public:
		Fixed( void );
		Fixed(const Fixed & _n1);
		Fixed(const int _Number);
		Fixed(const float _Number);
		Fixed & operator = (Fixed const & _n1);
		~Fixed( void );
		
		int		getter( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
};
		std::ostream & operator<<( std::ostream & os, Fixed const & _n1);

#endif