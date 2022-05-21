/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:48:22 by mwane             #+#    #+#             */
/*   Updated: 2022/05/21 12:47:19 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat j = Bureaucrat("Pierre", 20);
    Bureaucrat b = Bureaucrat("Mgaber", 100);
    Bureaucrat l = Bureaucrat("Jean", 10);
    Bureaucrat t = Bureaucrat("Jena-Pierre", 2);
    Intern lol;
    Form* p = lol.makeForm("shrubbery creation","test");
    Form* x = lol.makeForm("robotomy request","boss");
    Form* z = lol.makeForm("presidential pardon","Papacito");

    std::cout << j;
    std::cout << b;
    std::cout << l;
    std::cout << t;
    std::cout << *p;

    b.signForm(*p);
    l.signForm(*x);
    t.signForm(*z);
    std::cout << *p;
    try {
        p->beSigned(b);
    }
    catch (std::exception & e)
    {
        std::cerr<< e.what();
    }
    l.signForm(*p);
    std::cout << *p;
    std::cout << *x;
    std::cout << *x;
    p->execute(t);
    z->execute(t);
    t.executeForm(*x);
    return (0);
}