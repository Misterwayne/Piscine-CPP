/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:20:54 by truepath          #+#    #+#             */
/*   Updated: 2022/04/16 20:54:23 by mwane            ###   ########.fr       */
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
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& copy);

        int getRawBits(void) const;
        void setRawBits(int const raw);

};

#endif