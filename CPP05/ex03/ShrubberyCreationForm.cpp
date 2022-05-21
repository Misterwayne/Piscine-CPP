/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:03:20 by mwane             #+#    #+#             */
/*   Updated: 2022/05/19 20:56:29 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) :
Form("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) :
Form(copy)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm & copy) { return (copy);}

const std::string & ShrubberyCreationForm::getTarget() const {return (_target);}

void ShrubberyCreationForm::execute(const Bureaucrat & bureau) const
{
    checkGrades(bureau);
    shurbberyCreation();
}

void    ShrubberyCreationForm::shurbberyCreation() const
{
    std::string file = this->_target + "_shrubbery";
    std::ofstream output(file.c_str());

    if (!output)
    {
        std::cerr << "Error : Can't creat file";
        return ;
    }
    output << "      /\\\n"
    		<< "     /\\*\\\n"
    		<< "    /\\*\\*\\\n"
    		<< "   /*/\\/\\/\\\n"
  			<< "  /\\*\\/\\*\\/\\\n" 
 			<< " /\\*\\/\\*\\/\\/\\\n" 
			<< "/\\*\\/\\/*/\\/*/\\\n"
    		<< "      ||\n"
    		<< "      ||\n"
    		<< "      ||\n\n\n";

	output << "      /\\\n"
    		<< "     /\\*\\\n"
    		<< "    /\\*\\*\\\n"
    		<< "   /*/\\/\\/\\\n"
  			<< "  /\\*\\/\\*\\/\\\n" 
 			<< " /\\*\\/\\*\\/\\/\\\n" 
			<< "/\\*\\/\\/*/\\/*/\\\n"
    		<< "      ||\n"
    		<< "      ||\n"
    		<< "      ||\n";

}