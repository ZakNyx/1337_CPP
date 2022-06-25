/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:23:21 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/25 16:49:11 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


class	Contact{

	public:
		void setNumber(std::string anumber)
		{
			number = anumber;
		}
		std::string	getNumber()
		{
			return number;
		}
		void setFname(std::string fname)
		{
			first_name = fname;
		}
		std::string	getFname()
		{
			return first_name;
		}
		void setLname(std::string lname)
		{
			last_name = lname;
		}
		std::string	getLname()
		{
			return last_name;
		}
		void setNname(std::string nname)
		{
			nickname = nname;
		}
		std::string	getNname()
		{
			return nickname;
		}
		void setDsecret(std::string dsecret)
		{
			darkest_secret = dsecret;
		}
		std::string	getDsecret()
		{
			return darkest_secret;
		}	
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