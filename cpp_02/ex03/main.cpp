/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:33:45 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/09 13:09:18 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(0,0);
    Point b(50,0);
    Point c(0,30);
    Point x(7, 2);
    Point y(7, 31.5f);
    
    std::cout << bsp(a, b, c ,x) << std::endl;
    std::cout << c.area(a, b) << std::endl;
    std::cout << bsp(a, b, c ,y) << std::endl;
    return 0;
}