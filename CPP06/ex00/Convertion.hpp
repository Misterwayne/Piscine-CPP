/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:04:20 by truepath          #+#    #+#             */
/*   Updated: 2022/05/20 19:57:35 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef CONVERTION_HPP
#define CONVERTION_HPP
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <cerrno>
#include <cmath>
#include <iomanip>

class Convertion
{
    public :
        class WrongData : public std::exception
        {
            public :
                WrongData() throw();
                virtual const char* what() const throw();
        };
        class OutOfRange : public std::exception
        {
            public :
                OutOfRange() throw();
                virtual const char* what() const throw();
        };
        Convertion(std::string &data);
        ~Convertion();

        std::ostream&    printData(std::ostream &output);
        int     _d;
        char    _c;
        float   _f;
        double  _ld;
    private:

        bool    isInt(std::string &d);
        bool    isChar(std::string &c);
        bool    isDouble(std::string &data);
        bool    isFloat(std::string &data);
        void    intCase(std::string &data);
        void    charCase(std::string &data);
        void    floatCase(std::string &data);
        void    doubleCase(std::string &data);
};

std::ostream &operator<<(std::ostream &output, Convertion &obj);

#endif