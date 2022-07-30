/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:51:57 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/30 21:07:19 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point( void ): x(0), y(0){}

Point::Point( float x, float y): x(x), y(y){}

Point::Point(const Point & _p1): x(_p1.x), y(_p1.y){}

Point & Point::operator = (Point const & _n1) {
    (void)_n1;
    return(*this);
}

Fixed Point::getX( void ) const{
    return (this->x);
}

Fixed Point::getY( void ) const{
    return (this->y);
}

Fixed	Point::area(Point const & x, Point const & y) const
{
    Fixed half(0.5f);
    Fixed area (half * (this->getX() * (x.getY() - y.getY()) + x.getX() * (this->getY() - y.getY()) + y.getX() * (this->getY() - x.getY())));
    
    if (area < 0)
        area = area * -1;
    return (area);
}

Point::~Point( void ){}