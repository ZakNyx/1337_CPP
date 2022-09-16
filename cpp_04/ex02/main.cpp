/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:07:18 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/11 19:27:16 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
Animal *animal[10];
    for(int i = 0; i < 5; i++)
        animal[i] = new Dog();
        
    for(int i = 5; i < 10; i++)
        animal[i] = new Cat();
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << animal[i]->getType() << std::endl;
    }
}