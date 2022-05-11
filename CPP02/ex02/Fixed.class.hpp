/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:20:54 by truepath          #+#    #+#             */
/*   Updated: 2022/04/17 15:50:54 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <tgmath.h> 
#include <string>

class Fixed
{
    private:
        int rawBits;
        static const int fracBits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(int const nbr);
        Fixed(float const nbr);
        Fixed(const Fixed& copy);

        bool  operator>(const Fixed& fixedpoint) const;
        bool  operator<(const Fixed& fixedpoint) const;
        bool  operator>=(const Fixed& fixedpoint) const;
        bool  operator<=(const Fixed& fixedpoint) const;
        bool  operator==(const Fixed& fixedpoint) const;
        bool  operator!=(const Fixed& fixedpoint) const;

        Fixed &operator=(const Fixed& fixedpoint);
        Fixed operator+(const Fixed& fixedpoint) const;
        Fixed operator-(const Fixed& fixedpoint) const;
        Fixed operator*(const Fixed& fixedpoint) const;
        Fixed operator/(const Fixed& fixedpoint) const;
        
        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);

        static  Fixed&          min(Fixed& fixed1, Fixed& fixed2);
        static const Fixed&     min(Fixed const & fixed1, Fixed const & fixed2);
        static  Fixed&          max(Fixed& fixed1, Fixed& fixed2);
        static const Fixed&     max(Fixed const & fixed1, Fixed const & fixed2);
        
        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

};

std::ostream&   operator<<(std::ostream& output, Fixed const & fixed);

#endif