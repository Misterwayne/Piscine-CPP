/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:38:14 by truepath          #+#    #+#             */
/*   Updated: 2022/03/21 17:07:12 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int     main(int argc, char **argv)
{
    std::string str;
    std::locale loc;
    int i;

    i = 1;
    if (argc < 2)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (argc > i)
            str.append(argv[i++]);
    }
    i = 0;
    while (str[i])
        std::cout<< std::toupper(str[i++],loc);

    return 0;
}