/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:38:08 by zak               #+#    #+#             */
/*   Updated: 2023/06/14 15:39:10 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <exception>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>

class PmergeMe {
	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe& copy);
		PmergeMe &operator=(const PmergeMe& copy);
		~PmergeMe(void);

		void SortVector(int argc, char **argv);
		void sortList(int argc, char **argv);
};

#endif // PMERGEME_HPP