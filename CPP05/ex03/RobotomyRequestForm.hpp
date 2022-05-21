/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:46:46 by mwane             #+#    #+#             */
/*   Updated: 2022/05/19 21:00:50 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP
#include <fstream>
#include <math.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public :
        RobotomyRequestForm(const std::string &target = "default");
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm & copy);
        RobotomyRequestForm& operator=(RobotomyRequestForm & copy);

        const std::string &getTarget() const;
        virtual void      execute(const Bureaucrat & executor) const;
        void              robotomyRequest() const;
    
    private :
        std::string     _target;
};

#endif