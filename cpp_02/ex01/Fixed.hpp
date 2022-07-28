/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:33:41 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/28 19:03:32 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		
		friend std::ostream & operator<<( std::ostream & os, Fixed const & _n1);
};		