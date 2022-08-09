/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:24:30 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/09 15:02:11 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
		private:
			std::string	_target;
		public:
			RobotomyRequestForm( void );
			RobotomyRequestForm ( std::string Target);
			RobotomyRequestForm ( RobotomyRequestForm const & _p1);
			RobotomyRequestForm & operator = ( RobotomyRequestForm const & _p1 );
				void	execute(Bureaucrat const & executor) const;
			~RobotomyRequestForm( void );
};
#endif