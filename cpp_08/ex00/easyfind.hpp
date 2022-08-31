/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:27:34 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/31 11:39:23 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EAZYFIND_HPP

#include <algorithm>
template <typename T>
void	easyfind(T _haystack, int _needle){
	T<int>::iterator it = std::find_if(_haystack.begin(), _haystack.end(), _needle);
	std::cout << *it << std::endl;
};

#endif