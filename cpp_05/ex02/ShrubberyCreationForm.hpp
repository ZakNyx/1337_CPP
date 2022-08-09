/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:24:36 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/09 15:02:07 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP       
# define SHRUBBERYCREATIONFORM_HPP
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
		private:
			std::string	_target;
		public:
			ShrubberyCreationForm( void );
			ShrubberyCreationForm ( std::string Target);
			ShrubberyCreationForm ( ShrubberyCreationForm const & _p1);
			ShrubberyCreationForm & operator = ( ShrubberyCreationForm const & _p1 );
			void	execute(Bureaucrat const & executor) const;
			~ShrubberyCreationForm( void );
};
#endif