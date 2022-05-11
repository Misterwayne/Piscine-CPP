/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:16:19 by mwane             #+#    #+#             */
/*   Updated: 2022/04/18 17:25:56 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("base")
{
    std::cout << "base FragTrap constructor called"<<std::endl;
    this->hp = 100;
    this->energy = 100;
    this->attackpoint = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called"<<std::endl;
    this->hp = 100;
    this->energy = 100;
    this->attackpoint = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called"<<std::endl;
}

FragTrap::FragTrap(FragTrap const & copy)
{
    std::cout << "FragTrap copy constructor called"<<std::endl;
    *this = copy;
}

FragTrap&   FragTrap::operator=(FragTrap const & scav)
{
    this->attackpoint = scav.attackpoint;
    this->energy = scav.energy;
    this->hp = scav.hp;
    this->_name = scav._name;
    return (*this);
}

void        FragTrap::highFiveGuys(void) const
{
    std::cout << "High five guys? somebody?...\n";
}
