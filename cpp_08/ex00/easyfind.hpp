/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:27:34 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/31 13:29:32 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
int	easyfind(T _haystack, int _needle){ // found
	typename T::iterator it = std::find(_haystack.begin(), _haystack.end(), _needle);
	if (it != _haystack.end()){
		std::cout << "Found it at location " << (it - _haystack.begin()) << std::endl;
		return (1);
	} 
	else { // not found
		std::cout << "not found " << std::endl;
		return (0);
	}
	return (1);
};

#endif