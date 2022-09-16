/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:25:08 by zak               #+#    #+#             */
/*   Updated: 2022/09/14 18:49:58 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int    main( void )
{
    Array<int>            intArray;
    Array<std::string>    stringArray(10);
    Array<std::string>    otherStringArray;

    stringArray[0] = "Hi";
    stringArray[1] = "Hello";
    stringArray[2] = "How are you?";
    stringArray[3] = "Fine and you?";
    stringArray[4] = "Doing great thanks!";
    stringArray[5] = "You're very welcome";
    std::cout << "intArray.getSize() = " << intArray.getSize() << std::endl;
    std::cout << "stringArray.getSize() = " << stringArray.getSize() << std::endl;
    otherStringArray = stringArray;
    otherStringArray[3] = "I'm good, how about you?";

    try
    {
        std::cout << stringArray[10] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        int i;
        i = 0;
        while (i <= 5)
        {
            std::cout << stringArray[i] << std::endl;
            std::cout << otherStringArray[i] << std::endl;
            i++;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     // SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }