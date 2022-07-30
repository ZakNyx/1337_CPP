/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:52:03 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/30 16:03:28 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
class Point{
	
	private:
		Fixed const x;
		Fixed const	y;
	public :
		Point( void );
		Point(float x, float y);
		Point(const Point & _p1);
		Point & operator = (Point const & _n1);
		~Point( void );



};

#endif