/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:14:48 by truepath          #+#    #+#             */
/*   Updated: 2022/04/17 12:54:02 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : rawBits(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called\n";
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destruction called\n";
}

int		Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return (this->rawBits);
}

void    Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->rawBits = raw;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Assignation operator called\n";
	this->rawBits = copy.getRawBits();
	return (*this);
}