/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:07:18 by zihirri           #+#    #+#             */
/*   Updated: 2022/09/11 15:23:41 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "The animal type is : " << j->getType() << " " << std::endl;
    std::cout << "The animal type is : " << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;
    return (0);
}


// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const WrongAnimal* i = new WrongCat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     delete meta;
//     delete j;
//     return (0);
// }