/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:36:26 by mwane             #+#    #+#             */
/*   Updated: 2022/04/16 16:23:06 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){}

Weapon::~Weapon(){}

std::string     Weapon::getType() const
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
