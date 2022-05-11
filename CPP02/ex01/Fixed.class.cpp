/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:14:48 by truepath          #+#    #+#             */
/*   Updated: 2022/04/17 14:10:51 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : rawBits(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const nbr)
{
    //nbr^fractbits
    std::cout << "Int constructor called\n";
    this->rawBits = nbr << this->fracBits;
}

Fixed::Fixed(float const nbr)
{
    //X = arrondie(nbr * 2^fractbits)
    std::cout << "Float constructor called\n";
    this->rawBits = roundf(nbr * (1 << this->fracBits));
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

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Assignation operator called\n";
	this->rawBits = copy.getRawBits();
	return (*this);
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

float   Fixed::toFloat(void) const
{
    return ((float)this->rawBits / (float)(1 << this->fracBits));
}

int   Fixed::toInt(void) const
{
    int res;

    res = this->rawBits;
    res = this->rawBits >> this->fracBits;
    return (res);
}

std::ostream&   operator<<(std::ostream& output, Fixed const & fixed)
{
    output << fixed.toFloat();
    return (output);
}