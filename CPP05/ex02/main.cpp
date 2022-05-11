/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:48:22 by mwane             #+#    #+#             */
/*   Updated: 2022/05/11 16:19:18 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat j = Bureaucrat("Pierre", 20);
    Bureaucrat b = Bureaucrat("Mgaber", 100);
    Bureaucrat l = Bureaucrat("Jean", 10);
    Bureaucrat t = Bureaucrat("Jena-Pierre", 2);
    Form       p = Form("top secret", 30, 30);

    std::cout << j;
    std::cout << b;
    std::cout << l;
    std::cout << t;
    std::cout << p;

    b.signForm(p);
    std::cout << p;
    try {
        p.beSigned(b);
    }
    catch (std::exception & e)
    {
        std::cerr<< e.what();
    }
    l.signForm(p);
    std::cout << p;
    return (0);
}