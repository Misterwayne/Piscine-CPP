/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:20:54 by truepath          #+#    #+#             */
/*   Updated: 2022/03/23 22:51:25 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int rawBits;
        static const int fracBits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed(const Fixed& copy);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        Fixed& operator=(const Fixed& copy);
};

#endif