/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:14:48 by truepath          #+#    #+#             */
/*   Updated: 2022/04/17 15:47:44 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

//CONSTRUCTORS

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

//OPERATOR OVERLOAD

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

bool   Fixed::operator>(const Fixed& fixedpoint) const
{
    if (this->rawBits > fixedpoint.getRawBits())
        return (true);
    else
        return (false);
}

bool   Fixed::operator<(const Fixed& fixedpoint) const
{
    if (this->rawBits < fixedpoint.getRawBits())
        return (true);
    else
        return (false);
}

bool   Fixed::operator>=(const Fixed& fixedpoint) const
{
    if (this->rawBits >= fixedpoint.getRawBits())
        return (true);
    else
        return (false);
}

bool   Fixed::operator<=(const Fixed& fixedpoint) const
{
    if (this->rawBits <= fixedpoint.getRawBits())
        return (true);
    else
        return (false);
}

bool   Fixed::operator==(const Fixed& fixedpoint) const
{
    if (this->rawBits == fixedpoint.getRawBits())
        return (true);
    else
        return (false);
}

bool   Fixed::operator!=(const Fixed& fixedpoint) const
{
    if (this->rawBits != fixedpoint.getRawBits())
        return (true);
    else
        return (false);
}

Fixed  Fixed::operator+(const Fixed& fixedpoint) const
{
    float nbr1;
    float nbr2;
    float output;

    nbr1 = this->toFloat();
    nbr2 = fixedpoint.toFloat();
    output = nbr1 + nbr2;
    return (Fixed(output));
}
Fixed  Fixed::operator-(const Fixed& fixedpoint) const
{   
    float nbr1;
    float nbr2;
    float output;

    nbr1 = this->toFloat();
    nbr2 = fixedpoint.toFloat();
    output = nbr1 - nbr2;
    return (Fixed(output));
}

Fixed  Fixed::operator*(const Fixed& fixedpoint) const
{
   float nbr1;
    float nbr2;
    float output;

    nbr1 = this->toFloat();
    nbr2 = fixedpoint.toFloat();
    output = nbr1 * nbr2;
    return (Fixed(output));
}

Fixed  Fixed::operator/(const Fixed& fixedpoint) const
{
   float nbr1;
    float nbr2;
    float output;

    nbr1 = this->toFloat();
    nbr2 = fixedpoint.toFloat();
    output = nbr1 / nbr2;
    return (Fixed(output));
}
        
Fixed  Fixed::operator++(void)
{
    Fixed   inc;
    int     nbr;

    nbr = this->rawBits;
    ++nbr;
    inc.setRawBits(nbr);
    this->setRawBits(nbr);
    return (inc);
}

Fixed  Fixed::operator++(int)
{
    Fixed   inc;
    int     nbr;

    nbr = this->rawBits;
    inc.setRawBits(nbr);
    nbr++;
    this->setRawBits(nbr);
    return (inc);
}

Fixed  Fixed::operator--(void)
{
    Fixed   inc;
    int     nbr;

    nbr = this->rawBits;
    --nbr;
    inc.setRawBits(nbr);
    this->setRawBits(nbr);
    return (inc);
}

Fixed  Fixed::operator--(int)
{
    Fixed   inc;
    int     nbr;

    nbr = this->rawBits;
    inc.setRawBits(nbr);
    nbr--;
    this->setRawBits(nbr);
    return (inc);
}

//MEMBERS

Fixed&          Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
    if (fixed1 > fixed2)
        return (fixed2);
    else
        return (fixed1);
}

const Fixed&     Fixed::min(Fixed const & fixed1, Fixed const & fixed2)
{
    if (fixed1 > fixed2)
        return (fixed2);
    else
        return (fixed1);
}

Fixed&          Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
    if (fixed1 < fixed2)
        return (fixed2);
    else
        return (fixed1);
}

const Fixed&     Fixed::max(Fixed const & fixed1, Fixed const & fixed2)
{
    if (fixed1 < fixed2)
        return (fixed2);
    else
        return (fixed1);
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