/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:03:05 by mwane             #+#    #+#             */
/*   Updated: 2022/05/19 21:04:46 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
	Form("PresidentialPardonForm", 25, 5), _target(target) {}
	
PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copyObj) :
	Form(copyObj) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm & copy) { return (copy);}	

const std::string& PresidentialPardonForm::getTarget() const {return (_target);}

void PresidentialPardonForm::presidentialPardon() const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox\n";
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	checkGrades(executor);
	presidentialPardon();
}