/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:20:43 by mwane             #+#    #+#             */
/*   Updated: 2022/04/16 16:37:47 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon arm) : name(name), arm(arm) {}

HumanA::~HumanA(){}

void    HumanA::attack() const
{
    std::cout << this->name << " attacks with their " << arm.getType() << std::endl;
}