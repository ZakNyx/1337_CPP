/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:44:50 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/06 17:11:41 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    try {
        Bureaucrat test(155);
    }
    catch (Bureaucrat::GradeTooLowException mce)
    {
        std::cout << mce.what();
    }
}