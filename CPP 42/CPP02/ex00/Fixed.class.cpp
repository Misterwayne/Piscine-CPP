/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:14:48 by truepath          #+#    #+#             */
/*   Updated: 2022/03/23 22:55:27 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : rawBits(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int nbr)
{
	
}

Fixed::Fixed(const float nbr)
{
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called\n";
    rawBits = copy.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destruction called\n";
}

int		Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return (rawBits);
}

void    Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	rawBits = raw;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "setRawBits member function called\n";
	rawBits = copy.getRawBits();
	return (*this);
}