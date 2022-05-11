/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:58:25 by mwane             #+#    #+#             */
/*   Updated: 2022/04/15 19:10:58 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string adresse = " << &string <<std::endl;
    std::cout << "stringPTR = " << stringPTR <<std::endl;
    std::cout << "stringREF = " << &stringREF <<std::endl;

    std::cout << "string = " << string <<std::endl;
    std::cout << "stringPTR points to " << *stringPTR <<std::endl;
    std::cout << "stringREF points to " << stringREF <<std::endl;

    return (0);
}