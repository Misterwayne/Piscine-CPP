/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:48:45 by mwane             #+#    #+#             */
/*   Updated: 2022/05/19 20:30:27 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public :
        ShrubberyCreationForm(const std::string &target = "default");
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm & copy);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm & copy);

        const std::string &getTarget() const;
        void              shurbberyCreation() const;
        virtual void      execute(const Bureaucrat & executor) const;
    
    private :
        std::string     _target;
};

#endif