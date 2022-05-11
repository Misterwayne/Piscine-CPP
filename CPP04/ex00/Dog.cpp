/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:37:25 by mwane             #+#    #+#             */
/*   Updated: 2022/04/19 19:46:53 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _type("Dog")
{
    std::cout << "Dog constructor called\n";
}

Dog::Dog(std::string type) : _type(type)
{
    std::cout << "Dog constructor called, type initialised\n";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
}

Dog::Dog(Dog const & copy)
{
    (*this) = copy;
}

Dog&   Dog::operator=(Dog const & ani)
{
    this->_type = ani._type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Random Dog sound : Wof Wof Wof!\n";
}

std::string    Dog::getType() const
{
    return (this->_type);
}