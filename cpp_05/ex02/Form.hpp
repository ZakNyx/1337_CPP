/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:55:45 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/09 13:25:03 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class Form{
	private:
		std::string	_name;
		const int	_gradeToSigne;
		const int	_gradeToExecute;
		bool		_isSigned;

	public :
		
		Form( void );
		Form(std::string name, const int gts, const int gte);
		Form(Form const & _p1);
		Form & operator = (Form const & _p1);
		std::string getName( void ) const;
		bool		getIsSigned( void ) const;
		int			getGradeToSigne( void ) const;
		int			getGradeToExecute( void ) const;
		void		beSigned(Bureaucrat &prsn);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		~Form( void );

		class GradeTooHighException : public std::exception {
			public :
				virtual const char * what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public :
				virtual const char * what() const throw();
		};	
		
		class FormNotSigned : public std::exception {
			public :
				virtual const char * what() const throw();
		};	
};
	std::ostream & operator<<( std::ostream & os, Form const & _n1);
#endif // FORM_HPP