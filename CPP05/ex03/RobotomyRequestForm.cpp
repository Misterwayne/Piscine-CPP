/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:50:55 by mwane             #+#    #+#             */
/*   Updated: 2022/05/19 21:00:11 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
	Form("RobotomyRequestForm", 72, 45), _target(target) {}
	
RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copyObj) :
	Form(copyObj) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm & copy) {   return (copy);}


const std::string& RobotomyRequestForm::getTarget() const {return (_target);}

void RobotomyRequestForm::robotomyRequest() const
{
	if (rand() % 2)
		std::cout << "Draaaaaaaaaaaaaiiiiiiing draaaaaiiiiing gdraaaaaaaaaaing! " << _target << " has been succesfully robotomized!\n";
	else
		std::cout << "Robotomization on " << _target << " failed!\n";
}

void RobotomyRequestForm::execute(const Bureaucrat& bureau) const
{
	checkGrades(bureau);
	robotomyRequest();
}