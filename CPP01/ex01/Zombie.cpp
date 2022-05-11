/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:47:48 by mwane             #+#    #+#             */
/*   Updated: 2022/04/15 18:48:48 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
    std::cout<< this->name << " a ete detruit"<<std::endl;
}

void    Zombie::announce(void) {
    std::cout<< Zombie::name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}