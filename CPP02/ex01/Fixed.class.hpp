/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:20:54 by truepath          #+#    #+#             */
/*   Updated: 2022/04/17 14:56:10 by mwane            ###   ########.fr       */
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
        Fixed& operator=(const Fixed& copy);

        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

};

std::ostream&   operator<<(std::ostream& output, Fixed const & fixed);

#endif