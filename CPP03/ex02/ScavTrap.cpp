/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:25:08 by mwane             #+#    #+#             */
/*   Updated: 2022/04/18 17:10:15 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap("base")
{
    std::cout << "base ScavTrap constructor called"<<std::endl;
    this->hp = 100;
    this->energy = 50;
    this->attackpoint = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called"<<std::endl;
    this->hp = 100;
    this->energy = 50;
    this->attackpoint = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
    std::cout << "ScavTrap copy constructor called"<<std::endl;
    *this = copy;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const & scav)
{
    this->attackpoint = scav.attackpoint;
    this->energy = scav.energy;
    this->hp = scav.hp;
    this->_name = scav._name;
    return (*this);
}

void        ScavTrap::attack(const std::string &target) const
{
    if (this->energy < 1 || this->hp < 1)
    {
        std::cout<<"(ScavTrap)"<<this->_name <<": not enough energy!\n";
    }
    else
    {
        std::cout<< "(ScavTrap)" << this->_name << ": attacks "<< target << " causing " << this->attackpoint << " points of damage!\n";
    }
}

void        ScavTrap::guardGate(void)
{
    if (this->energy < 2 || this->hp < 2)
    {
        std::cout<<"(ScavTrap)"<<this->_name <<": not enough energy!\n";
    }
    else
    {
        std::cout<< "(ScavTrap)" << this->_name << ": is now in gatekeep mode!\n";
    }
}