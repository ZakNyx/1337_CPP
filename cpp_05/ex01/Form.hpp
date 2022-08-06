/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:55:45 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/06 20:09:50 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Form{
	private:
		std::string	_name;
		bool		_isSigned;
		const int	_gradeToSigne;
		const int	_gradeToExecute;

	public :
		
		Form( void );
		Form (std::string name, const int gts, const int gte);
		
		~Form( void );

		class GradeTooHighException : public std::exception {
			public :
				virtual const char * what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public :
				virtual const char * what() const throw();
		};	
};
#endif // FORM_HPP