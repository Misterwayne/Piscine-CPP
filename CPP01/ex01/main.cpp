/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:50:19 by mwane             #+#    #+#             */
/*   Updated: 2022/04/15 18:53:32 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name);

int main(void)
{
    Zombie *hordeZombie = zombieHorde(10, "george");
    
    for (int i = 0; i < 10;i++)
    {
        hordeZombie[i].announce();
    }
    delete [] hordeZombie;
    return 0;
}