/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:30:21 by zak               #+#    #+#             */
/*   Updated: 2023/06/11 22:19:39 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string.h>
#include <sstream>
#include <fstream>
#include <list>
#include <vector>
#include <cstdlib>

class PmergeMe
{
public:
    PmergeMe( void );
    ~PmergeMe( void );
    PmergeMe(PmergeMe const &p1);
    PmergeMe &operator=(PmergeMe const &_p1);
}
#endif