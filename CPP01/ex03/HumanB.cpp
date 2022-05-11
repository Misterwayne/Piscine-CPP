/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:48:00 by mwane             #+#    #+#             */
/*   Updated: 2022/04/16 16:39:19 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){}

HumanB::~HumanB(){}

void    HumanB::attack() const
{
    if (this->arm == NULL)
    {
        std::cout << this->name << " attacks with their hands"<< std::endl;
    }
    else
        std::cout << this->name << " attacks with their " << this->arm->getType() << std::endl;
}

void        HumanB::setWeapon(Weapon &arm)
{
    this->arm = &arm;
}