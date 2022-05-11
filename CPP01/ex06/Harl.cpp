/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:54:59 by mwane             #+#    #+#             */
/*   Updated: 2022/04/17 12:40:52 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain(std::string level)
{
    func_array  func[4];
    std::string array[4] = {"DEBUG", "INFO", "ERROR", "WARNING"};
    int index;

    func[0] = &Harl::debug;
    func[1] = &Harl::info;
    func[2] = &Harl::error;
    func[3] = &Harl::warning;
    index = 0;
    while (level.compare(array[index]))
        index++;
    switch (index)
    {
        case 0:
            (this->*func[0])();
        case 1:
            (this->*func[1])();
        case 2:
            (this->*func[2])();
        case 3:
            (this->*func[3])();
            break;
        default:
            std::cout <<"Probably complaining about insignificant problems"<<std::endl;
    }
    
}

void    Harl::debug(void)
{
    std::cout << "Harl : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void    Harl::info(void)
{
    std::cout << "Harl : I cannot believe adding extra bacon costs more money. You didnt putenough bacon in my burger! If you did, I wouldnt be asking for more!"<<std::endl;
}

void    Harl::warning(void)
{
    std::cout << "Harl : I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month"<<std::endl;
}

void    Harl::error(void)
{
    std::cout << "Harl : This is unacceptable! I want to speak to the manager now."<<std::endl;
}