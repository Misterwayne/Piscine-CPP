/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:53:02 by mwane             #+#    #+#             */
/*   Updated: 2022/04/19 19:48:40 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _type("Cat")
{
    std::cout << "Cat constructor called\n";
}

Cat::Cat(std::string type) : _type(type)
{
    std::cout << "Cat constructor called, type initialised\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
}

Cat::Cat(Cat const & copy)
{
    (*this) = copy;
}

Cat&   Cat::operator=(Cat const & ani)
{
    this->_type = ani._type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Random Cat sound : miaow miaow!\n";
}

std::string    Cat::getType() const
{
    return (this->_type);
}