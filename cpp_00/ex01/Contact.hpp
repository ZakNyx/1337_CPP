/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:23:21 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/23 01:05:51 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Contact{

	public:
		void setNumber(std::string number)
		{
			number = number;
		}
		std::string	getNumber()
		{
			return number;
		}
	private:
		std::string number;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		
		Contact();
		~Contact();
};

#endif