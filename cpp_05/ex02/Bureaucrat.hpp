/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:44:29 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/09 15:09:19 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat;
class Form;

class Bureaucrat{
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat( void );
		Bureaucrat( int grade, std::string name );
		Bureaucrat(Bureaucrat const & _p1);
		Bureaucrat & operator = (Bureaucrat const & _p1);
		~Bureaucrat( void );
		std::string getName( void ) const;
		int			getGrade( void ) const;

		void	increment( void );
		void	decrement( void );
		void	signForm( Form & _p1 );

		void	executeForm(Form const & form);
		class GradeTooHighException : public std::exception {
			public :
				virtual const char * what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public :
				virtual const char * what() const throw();
		};	
};
	std::ostream & operator<<( std::ostream & os, Bureaucrat const & _n1);
#endif //BUREAUCRAT_HPP