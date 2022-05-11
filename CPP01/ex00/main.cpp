/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:36:52 by mwane             #+#    #+#             */
/*   Updated: 2022/04/15 17:23:17 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie *zombie1;
    Zombie *zombie2;

    zombie1 = newZombie("first");
    zombie2 = newZombie("second");
    zombie1->announce();
    randomChump("fake zombie");
    delete zombie1;
    zombie1 = newZombie("trird");
    zombie1->announce();
    zombie2->announce();
    delete zombie1;
    delete zombie2;
    return (0);
}