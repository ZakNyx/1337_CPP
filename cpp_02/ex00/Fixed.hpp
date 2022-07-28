/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:44:25 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/28 16:31:51 by zihirri          ###   ########.fr       */
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
		Fixed & operator = (Fixed const & _n1);
		~Fixed( void );
		
		int	getter( void ) const;
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
		
};