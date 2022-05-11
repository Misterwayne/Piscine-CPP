/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:47:48 by mwane             #+#    #+#             */
/*   Updated: 2022/04/15 17:26:31 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie()
{
    std::cout<< this->name << " a ete detruit"<<std::endl;
}

void    Zombie::announce(void) {
    std::cout<< Zombie::name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}
