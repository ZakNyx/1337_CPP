/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:24:23 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/08 19:52:45 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
		private:
			std::string	_target;
		public:
			PresidentialPardonForm( void );
			PresidentialPardonForm ( std::string Target);
			PresidentialPardonForm ( PresidentialPardonForm const & _p1);
			PresidentialPardonForm & operator = ( PresidentialPardonForm const & _p1 );
				void	execute(Bureaucrat const & executor) const;
			~PresidentialPardonForm( void );
};
#endif