/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:37:25 by mwane             #+#    #+#             */
/*   Updated: 2022/04/20 16:39:12 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), cerveau(new Brain())
{
    std::cout << "Dog constructor called\n";
}

Dog::Dog(std::string type) : Animal(type), cerveau(new Brain())
{
    std::cout << "Dog constructor called, type initialised\n";
}

Dog::~Dog()
{
    delete this->cerveau;
    std::cout << "Dog destructor called\n";
}

Dog::Dog(Dog const & copy) : Animal("Dog"), cerveau(new Brain())
{
    (*this) = copy;
}

Dog&   Dog::operator=(Dog const & ani)
{
    *this->cerveau = (*(ani.getBrain()));
    this->_type = ani.getType();
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Random "<< this->getType() << " sound : Wof Wof Wof!\n";
}

std::string    Dog::getType() const
{
    return (this->_type);
}

Brain    *Dog::getBrain() const
{
    return (this->cerveau);
}