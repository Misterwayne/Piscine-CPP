/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:03:17 by mwane             #+#    #+#             */
/*   Updated: 2022/05/21 12:45:27 by mwane            ###   ########.fr       */
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

const std::string     Bureaucrat::get_name() const
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

void			Bureaucrat::signForm(Form &paper)
{
	if (paper.get_status())
		std::cout << "Form already signed\n";
	else if (_grade <= paper.get_sgrade())
	{
		std::cout << _name << " signed " << paper.get_name() <<std::endl;
		paper.sign();
	}
	else if (_grade >= paper.get_sgrade())
	{
		std::cout<< this->_name << " couldn't sign " << paper.get_name()
		<< " because " << _grade << " < " << paper.get_sgrade()<<std::endl;
	}
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

void			Bureaucrat::executeForm(Form const &form)
{
	form.checkGrades(*this);
	form.execute(*this);
	std::cout << _name << " executed " << form.get_name() << std::endl;
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
	output << bureau.get_name() <<  " bureaucrat grade " << bureau.get_grade() << std::endl;
	return (output);
}

