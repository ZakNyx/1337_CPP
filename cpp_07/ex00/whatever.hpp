/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 19:14:17 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/13 14:34:22 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>

template < typename type >

void    swap(type &_arg1, type &_arg2){
	type	_arg3;
	
	_arg3 = _arg1;
	_arg1 = _arg2;
	_arg2 = _arg3;
}

template < typename type >
	
type    min(type &_arg1, type &_arg2){
	if (_arg1 < _arg2)
		return (_arg1);
	else
		return (_arg2);
}

template < typename type >
	
type    max(type &_arg1, type &_arg2){
	if (_arg1 > _arg2)
		return (_arg1);
	else
		return (_arg2);
}


#endif // WHATEVER_HPP