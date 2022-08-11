/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:23:39 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/11 17:01:59 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t   serialize(Data* ptr){
	return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}