/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:52:15 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/30 21:05:45 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if(a.area(b, c) == point.area(b, c) + point.area(a, c) + point.area(a, b))
        return (true);
    else
        return (false);
}