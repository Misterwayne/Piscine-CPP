/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:03:17 by mwane             #+#    #+#             */
/*   Updated: 2022/05/11 13:38:40 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradetooHighExcep();
	else if (grade > 150)
		throw GradetooLowExcep();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade)
{
}

Bureaucrat::~Bureaucrat()
{

}

const std::string&     Bureaucrat::get_name() const
{
	return (_name);
}

int             Bureaucrat::get_grade() const
{
	return (_grade);
}

Bureaucrat&     Bureaucrat::operator=(Bureaucrat& copy)
{
	this->_grade = copy.get_grade();
	return (*this);
}

void			Bureaucrat::UpGrade()
{
	if (this->_grade == 1)
		throw GradetooHighExcep();
	else
		this->_grade--;
}

void			Bureaucrat::DownGrade()
{
	if (this->_grade == 150)
		throw GradetooLowExcep();
	else
		this->_grade++;
}

Bureaucrat::GradetooHighExcep::GradetooHighExcep() throw() {}

const char* Bureaucrat::GradetooHighExcep::what() const throw()
{
	return ("Grade too high. (max : 1)");
}

Bureaucrat::GradetooLowExcep::GradetooLowExcep() throw() {}

const char* Bureaucrat::GradetooLowExcep::what() const throw()
{
	return ("Grade too high. (max : 1)");
}

std::ostream& operator<<(std::ostream& output, Bureaucrat& bureau)
{
	output << bureau.get_name() <<  " bureaucrat grade " << bureau.get_grade();
	return (output);
}

