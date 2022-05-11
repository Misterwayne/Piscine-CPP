/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:53:02 by mwane             #+#    #+#             */
/*   Updated: 2022/04/20 16:40:28 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), cerveau(new Brain())
{
    std::cout << "Cat constructor called\n";
}

Cat::Cat(std::string type) : Animal(type), cerveau(new Brain())
{
    std::cout << "Cat constructor called, type initialised\n";
}

Cat::~Cat()
{
    delete this->cerveau;
    std::cout << "Cat destructor called\n";
}

Cat::Cat(Cat const & copy) : Animal("Cat"), cerveau(new Brain())
{
    (*this) = copy;
}

Cat&   Cat::operator=(Cat const & ani)
{
    *this->cerveau = *(ani.getBrain());
    this->_type = ani.getType();
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

Brain    *Cat::getBrain() const
{
    return (this->cerveau);
}