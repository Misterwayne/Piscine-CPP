/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:01:48 by mwane             #+#    #+#             */
/*   Updated: 2022/05/19 21:08:31 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENT_HPP
# define PRESIDENT_HPP
#include <fstream>
#include <math.h>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public :
        PresidentialPardonForm(const std::string &target = "default");
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm & copy);
        PresidentialPardonForm& operator=(PresidentialPardonForm & copy);

        const std::string &getTarget() const;
        virtual void      execute(const Bureaucrat & executor) const;
        void              presidentialPardon() const;
    
    private :
        std::string     _target;
};

#endif