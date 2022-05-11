/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:14:15 by mwane             #+#    #+#             */
/*   Updated: 2022/05/11 12:42:31 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called\n";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal::Animal(std::string type) : _type(type)
{}

Animal::Animal(Animal const & copy)
{
    (*this) = copy;
}

Animal&   Animal::operator=(Animal const & ani)
{
    this->_type = ani._type;
    return (*this);
}

void    Animal::makeSound(void) const
{
    std::cout << "Random animal sound\n";
}


std::string    Animal::getType() const
{
    return (this->_type);
}