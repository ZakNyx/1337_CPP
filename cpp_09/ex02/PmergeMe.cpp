/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:37:43 by zak               #+#    #+#             */
/*   Updated: 2023/06/14 16:53:03 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

unsigned int ft_stou(const std::string &str);
PmergeMe::PmergeMe(void){};

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	(void)copy;
	return *this;
}

PmergeMe::~PmergeMe(void){};

static void PrintVector(std::vector<unsigned int> &vec)
{
	std::vector<unsigned int>::const_iterator itr;
	for (itr = vec.begin(); itr != vec.end(); itr++)
		std::cout << *itr << " ";
	std::cout << std::endl;
}

std::vector<unsigned int> MergeVectors(std::vector<unsigned int> &left, std::vector<unsigned int> &right)
{
	std::vector<unsigned int> result;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			result.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty())
	{
		result.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		result.push_back(right.front());
		right.erase(right.begin());
	}
	return result;
}

std::vector<unsigned int> MergeInsertVector(std::vector<unsigned int> &vec)
{
	if (vec.size() <= 1)
		return vec;

	int mid = vec.size() / 2;
	std::vector<unsigned int> left(vec.begin(), vec.begin() + mid);
	std::vector<unsigned int> right(vec.begin() + mid, vec.end());

	left = MergeInsertVector(left);
	right = MergeInsertVector(right);

	return MergeVectors(left, right);
}

void PmergeMe::SortVector(int argc, char **argv)
{
	std::vector<unsigned int> storage;
	// Fill the Vector
	for (int i = 1; i < argc; i++)
		storage.push_back(ft_stou(argv[i]));

	std::cout << "Vector before: ";
	PrintVector(storage);
	// Starting the timer
	std::clock_t start = std::clock();
	storage = MergeInsertVector(storage);
	// Calculate the time to seconds then to microseconds
	double duration = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;
	std::cout << "Vector after: ";
	PrintVector(storage);

	std::cout << "Time to process a range of " << argc - 1
			  << " elements "
			  << duration << " microseconds" << std::endl;
}

static void PrintList(std::list<unsigned int> &lst)
{
	std::list<unsigned int>::const_iterator itr;
	for (itr = lst.begin(); itr != lst.end(); itr++)
		std::cout << *itr << " ";
	std::cout << std::endl;
}

static std::list<unsigned int> mergeLists(std::list<unsigned int> &left, std::list<unsigned int> &right)
{
	std::list<unsigned int> result;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			result.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty())
	{
		result.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		result.push_back(right.front());
		right.erase(right.begin());
	}
	return result;
}

static std::list<unsigned int> mergeInsertList(std::list<unsigned int> &lst)
{
	if (lst.size() <= 1)
		return lst;

	int mid = lst.size() / 2;
	std::list<unsigned int> left;
	std::list<unsigned int> right;

	for (int i = 0; i < mid; i++)
	{
		left.push_back(lst.front());
		lst.pop_front();
	}
	right = lst;
	left = mergeInsertList(left);
	right = mergeInsertList(right);
	return mergeLists(left, right);
}

void PmergeMe::sortList(int argc, char **argv)
{
	std::list<unsigned int> storage;

	for (int i = 1; i < argc; i++)
		storage.push_back(ft_stou(argv[i]));
	std::cout << "List before: ";
	PrintList(storage);
	std::clock_t start = std::clock();
	storage = mergeInsertList(storage);
	double duration = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;
	std::cout << "List after: ";
	PrintList(storage);

	std::cout << "Time to process a range of " << argc - 1
			  << " elements "
			  << duration << " microseconds" << std::endl;
}
