/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:26:14 by mwane             #+#    #+#             */
/*   Updated: 2022/05/19 22:00:30 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    _validName[0] = "shrubbery creation";
    _validName[1] = "robotomy request";
    _validName[2] = "presidential pardon";

    _creatFunc[0] = creatShrubberyForm;
    _creatFunc[1] = creatRoboForm;
    _creatFunc[2] = creatPresiForm;
}

Intern::~Intern()
{}

Form*   Intern::creatShrubberyForm(std::string &target)
{
    return (new ShrubberyCreationForm(target));
}

Form*   Intern::creatPresiForm(std::string &target)
{
    return (new PresidentialPardonForm(target));
}

Form*   Intern::creatRoboForm(std::string &target)
{
    return (new RobotomyRequestForm(target));
}

Form*   Intern::makeForm(std::string name, std::string target)
{
    for (int i = 0; i < 2; i++)
    {
        if (name.compare(_validName[i]))
            return (_creatFunc[i](target));
    }
    throw WrongFormName();
}


Intern::WrongFormName::WrongFormName() throw() {}

const char* Intern::WrongFormName::what() const throw()
{
	return ("Error : Wrong Form name.\n");
}
