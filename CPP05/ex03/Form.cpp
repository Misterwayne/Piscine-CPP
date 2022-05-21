/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:27:00 by mwane             #+#    #+#             */
/*   Updated: 2022/05/21 12:54:39 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, int egrade, int sgrade, bool isSigned) : _name(name), _egrade(egrade), _sgrade(sgrade)
, _isSigned(isSigned)
{
	if (egrade < 1 || sgrade < 1)
		throw GradetooHighExcep();
	else if (egrade > 150 || egrade > 150)
		throw GradetooLowExcep();
}

Form::Form(const Form& copy) : _name(copy._name),
_egrade(copy._egrade),
_sgrade(copy._sgrade),
_isSigned(copy._isSigned)
{
}

Form::~Form()
{

}

int             Form::get_sgrade() const {	return (_sgrade);}

int             Form::get_egrade() const { return (_egrade);}

std::string   Form::get_name() const { return(_name);}

bool             Form::get_status() const {	return (_isSigned);}

void    Form::sign()
{
    this->_isSigned = true;
}

void			Form::checkGrades(const Bureaucrat & bureau) const
{
	if (!_isSigned)
		throw UnsignedExep();
	if (bureau.get_grade() >= _egrade)
		throw GradetooLowExcep();
}

void	Form::beSigned(Bureaucrat & bureau)
{
    if (bureau.get_grade() <= _sgrade)
        sign();
    else
        throw GradetooLowExcep();
}


Form::GradetooHighExcep::GradetooHighExcep() throw() {}

const char* Form::GradetooHighExcep::what() const throw()
{
	return ("Grade too high. (max : 1)\n");
}

Form::GradetooLowExcep::GradetooLowExcep() throw() {}

const char* Form::GradetooLowExcep::what() const throw()
{
	return ("Grade too low. (min : 150)\n");
}

Form::UnsignedExep::UnsignedExep() throw() {}

const char* Form::UnsignedExep::what() const throw()
{
	return ("Form unsigned, can't execute\n");
}

std::ostream& operator<<(std::ostream& output, Form& form)
{
	output <<"_____________________________________\n";
	output << std::setw(10) <<"Form : "<< form.get_name() ;
	output << std::setw(10) <<"\ngrade to signed :" << form.get_sgrade();
    output << std::setw(10) <<"\ngrade to exec :" << form.get_egrade();
    output << std::setw(10) <<"\nis signed :" << form.get_status() <<std::endl;
	output <<"--------------------------------------\n";
	return (output);
}

