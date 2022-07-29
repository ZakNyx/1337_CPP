/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:44:25 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/28 21:44:04 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_Number;
		static const int	_Fractional;

	public:
		Fixed( void );
		Fixed(const Fixed & _n1);
		Fixed & operator = (Fixed const & _n1);
		~Fixed( void );
		
		int	getter( void ) const;
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
		
};

#endif