/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:19:32 by truepath          #+#    #+#             */
/*   Updated: 2022/05/20 19:49:52 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convertion.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    std::string data(argv[1]);
    std::cout<<data<<"\n";
    try {
        Convertion v(data);
        std::cout<<v;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() <<std::endl;
    }
   
    return 0;
}