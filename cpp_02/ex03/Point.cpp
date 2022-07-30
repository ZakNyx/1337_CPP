/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:51:57 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/30 16:17:14 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): x(0), y(0){}

Point::Point( float x, float y): x(x), y(y){}

Point::Point(const Point & _p1)
{
    this->x = _p1.x;
    this->y = _p1.y;
}

Point & Point::operator = (Point const & _n1){
}

Point::~Point( void ){}