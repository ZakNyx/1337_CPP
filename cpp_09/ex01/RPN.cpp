/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zak <zak@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:26:16 by zihirri           #+#    #+#             */
/*   Updated: 2023/06/10 20:22:55 by zak              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}

RPN::RPN(const RPN &other)
{
    stack = other.stack;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        stack = other.stack;
    }
    return *this;
}

void RPN::evaluateRPN(const std::string &cmd)
{
    std::istringstream iss(cmd);
    std::string token;

    while (iss >> token)
    {
        if (token.length() != 1)
        {
            std::cerr << "Error: Bad Input!" << std::endl;
            exit(1);
        }
        if (isdigit(token[0]))
            stack.push(std::atoi(token.c_str()));
        else
        {
            if (stack.size() < 2)
            {
                std::cerr << "Error: Bad Input!" << std::endl;
                exit (1);
            }
            int right = stack.top();
            stack.pop();
            int left = stack.top();
            stack.pop();

            if (token == "+")
            {
                stack.push(left + right);
            }
            else if (token == "-")
            {
                stack.push(left - right);
            }
            else if (token == "*")
            {
                stack.push(left * right);
            }
            else if (token == "/")
            {
                if (right == 0)
                {
                    std::cerr << "Error: Division by 0!" << std::endl;
                    exit (1);
                }
                stack.push(left / right);
            }
        }
    }
    if (stack.size() > 1)
    {
        std::cerr << "Error: Missing Opporators" << std::endl;
        exit (1);
    }
    std::cout << stack.top() << std::endl;
}