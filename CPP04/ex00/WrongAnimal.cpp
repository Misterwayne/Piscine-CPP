/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorngAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:50:57 by mwane             #+#    #+#             */
/*   Updated: 2022/04/19 19:54:34 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
    (*this) = copy;
}

WrongAnimal&   WrongAnimal::operator=(WrongAnimal const & ani)
{
    this->_type = ani._type;
    return (*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Random Wronganimal sound\n";
}


std::string    WrongAnimal::getType() const
{
    return (this->_type);
}