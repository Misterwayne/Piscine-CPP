/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:20:26 by mwane             #+#    #+#             */
/*   Updated: 2022/05/19 21:56:09 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class   Intern
{
    public :
        class WrongFormName : public std::exception
	    {
			public :

			WrongFormName() throw();
			virtual const char* what() const throw();
		};
        Intern();
        ~Intern();
		Intern(Form const & copy);
        Form            *makeForm(std::string name, std::string target);
    private :
        Form*           (*_creatFunc[3])(std::string &string);
        std::string     _validName[3];
        static Form*           creatRoboForm(std::string& target);
		static Form*           creatShrubberyForm(std::string& target);
		static Form*           creatPresiForm(std::string& target);

};