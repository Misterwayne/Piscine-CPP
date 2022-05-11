/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:03:20 by mwane             #+#    #+#             */
/*   Updated: 2022/05/11 17:24:48 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : Form(copy)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm & copy)
{
    return (*this);
}

const std::string & ShrubberyCreationForm::getTarget() const
{
    return (_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat & bureau) const
{
    checkGrades(bureau);
    shirbberyCreation();
}