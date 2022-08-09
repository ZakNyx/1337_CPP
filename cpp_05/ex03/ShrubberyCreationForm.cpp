/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:24:33 by zihirri           #+#    #+#             */
/*   Updated: 2022/08/09 15:30:29 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ){}

ShrubberyCreationForm::ShrubberyCreationForm( std::string Target ) : Form("ShrubberyCreationForm", 145, 137){
	this->_target = Target;
}

ShrubberyCreationForm::ShrubberyCreationForm ( ShrubberyCreationForm const & _p1) : Form(_p1) {
	this->_target = _p1._target;	
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = ( ShrubberyCreationForm const & _p1 ) {
	this->_target = _p1._target;
	
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if(this->getIsSigned() == false)
		throw(Form::FormNotSigned());
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::ofstream ofs(std::string(this->_target + "_shrubbery").c_str());
		ofs << "                                                         ." << std::endl;
		ofs << "                                              .         ;  " << std::endl;
		ofs << "                 .              .              ;%     ;;   " << std::endl;
		ofs << "                   ,           ,                :;%  %;   " << std::endl;
		ofs << "                    :         ;                   :;%;'     .,   " << std::endl;
		ofs << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
		ofs << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		ofs << "             %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
		ofs << "              ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		ofs << "               `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		ofs << "                `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		ofs << "                   `:%;.  :;bd%;          %;@%;'" << std::endl;
		ofs << "                     `@%:.  :;%.         ;@@%;'   " << std::endl;
		ofs << "                       `@%.  `;@%.      ;@@%;         " << std::endl;
		ofs << "                         `@%%. `@%%    ;@@%;        " << std::endl;
		ofs << "                           ;@%. :@%%  %@@%;       " << std::endl;
		ofs << "                             %@bd%%%bd%%:;     " << std::endl;
		ofs << "                               #@%%%%%:;;" << std::endl;
		ofs << "                                %@@%%%::;" << std::endl;
		ofs << "                               %@@@%(o);  . '    " << std::endl;
		ofs << "                               %@@@o%;:(.,'         " << std::endl;
		ofs << "                           `.. %@@@o%::;         " << std::endl;
		ofs << "                              `)@@@o%::;         " << std::endl;
		ofs << "                               %@@(o)::;        " << std::endl;
		ofs << "                              .%@@@@%::;         " << std::endl;
		ofs << "                              ;%@@@@%::;.          " << std::endl;
		ofs << "                             ;%@@@@%%:;;;. " << std::endl;
		ofs << "                         ...;%@@@@@%%:;;;;,..    " << std::endl;
		ofs.close();
	}
	else
		throw(Bureaucrat::GradeTooLowException());
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){}
