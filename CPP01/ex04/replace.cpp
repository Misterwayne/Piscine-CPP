/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:42:46 by mwane             #+#    #+#             */
/*   Updated: 2022/04/16 18:26:26 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void    error_msg(std::string msg)
{
    std::cout << "error : " << msg << std::endl;
    exit(1);
}

void    replace(std::string &line, std::string s1, std::string s2)
{
    int lens1;
    int lens2;
    int pos;

    lens1 = s1.length();
    lens2 = s2.length();
    if (s1.compare(s2) == 0)
        return ;
    pos = line.rfind(s1);
    while (pos >= 0)
    {
        line.erase(pos, lens1);
        line.insert(pos, s2);
        pos--;
        if (pos >= 0)
            pos = line.rfind(s1);
    }
}
