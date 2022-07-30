/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:33:41 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/29 22:58:17 by zihirri          ###   ########.fr       */
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
		
		/* Comparison Operators */
		Fixed & operator = (Fixed const & _n1);
		int	operator > (Fixed const & _n1);
		int	operator < (Fixed const & _n1);
		int	operator >= (Fixed const & _n1);
		int	operator <= (Fixed const & _n1);
		int	operator == (Fixed const & _n1);
		int	operator != (Fixed const & _n1);
		/* Arithmetic Operators */
		Fixed	operator * ( Fixed const & _n1);
		Fixed	operator - (Fixed const & _n1);
		Fixed	operator + (Fixed const & _n1);
		Fixed	operator / (Fixed const & _n1);
		/* Increment/Decrement  Operators */
		Fixed	operator ++ ( int );	// Post
		Fixed	operator -- ( int );  
		Fixed	operator ++ ( void );	// Pre
		Fixed	operator -- ( void );
		
		static Fixed	min( Fixed & _n1, Fixed & _n2 );
		static const Fixed	min( Fixed const & _n1, Fixed const & _n2 );
 
		static Fixed	max( Fixed & _n1, Fixed & _n2 );
		static const Fixed	max( Fixed const & _n1, Fixed const & _n2 );
		~Fixed( void );
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
};
		std::ostream & operator<<( std::ostream & os, Fixed const & _n1);

#endif