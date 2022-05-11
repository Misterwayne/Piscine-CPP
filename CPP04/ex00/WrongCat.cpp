/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:56:41 by mwane             #+#    #+#             */
/*   Updated: 2022/04/19 19:57:44 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : _type("WrongCat")
{
    std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(std::string type) : _type(type)
{
    std::cout << "WrongCat constructor called, type initialised\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(WrongCat const & copy)
{
    (*this) = copy;
}

WrongCat&   WrongCat::operator=(WrongCat const & ani)
{
    this->_type = ani._type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Random WrongCat sound : miaow miaow!\n";
}

std::string    WrongCat::getType() const
{
    return (this->_type);
}