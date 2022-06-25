/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:24:26 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/24 18:02:14 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{
    public:
        Contact Contacts[8];
        PhoneBook(void);
        ~PhoneBook(void);
        
        void    add( void );
        void    search( void );
    
    private:
        static int i;
        int pos;

};

#endif