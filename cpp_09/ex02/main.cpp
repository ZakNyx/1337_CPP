/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:30:15 by zak               #+#    #+#             */
/*   Updated: 2023/06/14 15:50:11 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

unsigned int ft_stou(const std::string &str)
{
    unsigned int num;
    std::stringstream ss(str);

    ss >> num;
    return num;
}

int main(int argc, char **argv)
{
    if (argc == 1)
        return 0;
    std::vector<unsigned int> temp;
    std::vector<unsigned int>::iterator itr;
    std::vector<unsigned int>::iterator itr2;
    PmergeMe pmm;
    for (int i = 1; i < argc; i++)
    {

        if (std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
        {
            std::cerr << "Error: Invalid input" << std::endl;
            exit(1);
        }
    }
    for (int i = 1; i < argc; i += 1)
        temp.push_back(ft_stou(argv[i]));
        
    for (itr = temp.begin(); itr != temp.end(); itr++)
    {
        for (itr2 = itr + 1; itr2 != temp.end(); itr2++)
            if (*itr2 == *itr)
            {
                std::cerr << "Error: Invalid input" << std::endl;
                exit(1);
            }
    }

    pmm.SortVector(argc, argv);
    std::cout << std::endl;
    pmm.sortList(argc, argv);

    return 0;
}