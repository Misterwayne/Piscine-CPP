/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:50:20 by mwane             #+#    #+#             */
/*   Updated: 2022/04/18 17:47:25 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) : _name(name) 
{
    std::cout << "ClapTrap constructor called"<<std::endl;
}

ClapTrap::ClapTrap(void) : _name("base") 
{
    std::cout << "base ClapTrap constructor called"<<std::endl;
    this->hp = 10;
    this->energy = 10;
    this->attackpoint = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap copy constructor called"<<std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called"<<std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap & clap)
{
    this->attackpoint = clap.attackpoint;
    this->energy = clap.energy;
    this->hp = clap.hp;
    this->_name = clap._name;
    return (*this);
}

void        ClapTrap::attack(const std::string &target)
{
    if (this->energy < 1 || this->hp < 1)
    {
        std::cout<< "not enough energy!\n";
    }
    else
    {
        std::cout<< this->_name << " attacks "<< target << " causing " << this->attackpoint << " points of damage!\n";
        this->energy--;
    }
}

void        ClapTrap::takeDammage(unsigned int amount)
{
    std::cout<< this->_name <<" got attcked causing " << amount << " points of damage!\n";
    this->hp--;
}

void        ClapTrap::beRepaired(unsigned int amount)
{
    std::cout<< this->_name <<" healed for " << amount << " health points\n";
}