/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:00 by zihirri           #+#    #+#             */
/*   Updated: 2022/07/29 17:20:02 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Contact.hpp"
# include <iomanip>

Contact::Contact()
{
    return ;
}

	void Contact::setNumber(std::string anumber){
			this->number = anumber;
		}
	
    std::string	Contact::getNumber(){
			return this->number;
		}
	
    void Contact::setFname(std::string fname){
			this->first_name = fname;
		}
		
    std::string	Contact::getFname(){
			return this->first_name;
		}
	
    void Contact::setLname(std::string lname){
			this->last_name = lname;
		}
	
    std::string	Contact::getLname(){
			return this->last_name;
		}
	
    void Contact::setNname(std::string nname){
			this->nickname = nname;
		}
	
    std::string	Contact::getNname(){
			return this->nickname;
		}
	
    void Contact::setDsecret(std::string dsecret){
			this->darkest_secret = dsecret;
		}
	
    std::string	Contact::getDsecret(){
			return this->darkest_secret;
		}	
        
Contact::~Contact()
{
    return ;
}

void    Contact::displayInfo( void )
{
    std::cout.flags (std::ios::right);
    std::cout << "Number: " << getNumber() << std::endl;
    std::cout << "First Name: " << getFname() << std::endl;
    std::cout << "Last Name: " << getLname() << std::endl;
    std::cout << "Nickname: " << getNname() << std::endl;
    std::cout << "Darkest Secret: " << getDsecret() << std::endl;
}