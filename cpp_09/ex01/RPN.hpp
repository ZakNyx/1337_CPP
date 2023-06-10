/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:26:16 by zihirri           #+#    #+#             */
/*   Updated: 2023/06/10 20:18:27 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>

class RPN {
private:
    std::stack<int> stack;

public:
    RPN( void );                            // Default constructor
    RPN(const RPN& other);                 // Copy constructor
    RPN& operator=(const RPN& other);      // Copy assignment operator
    ~RPN();                               // Destructor
    void evaluateRPN(const std::string& cmd);
};

#endif