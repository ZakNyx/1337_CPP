/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:23:21 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/29 17:19:32 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class	Contact{

	public:
		void setNumber(std::string anumber);
		std::string	getNumber();
		void setFname(std::string fname);
		std::string	getFname();
		void setLname(std::string lname);
		std::string	getLname();
		void setNname(std::string nname);
		std::string	getNname();
		void setDsecret(std::string dsecret);
		std::string	getDsecret();
		Contact();
		~Contact();
		
		void	displayInfo();
	private:
		std::string number;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;

};

#endif