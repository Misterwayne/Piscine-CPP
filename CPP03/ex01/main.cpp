/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:03:48 by mwane             #+#    #+#             */
/*   Updated: 2022/04/18 17:05:43 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap bro = ScavTrap("bro");
    bro.attack("lil bro");
    bro.guardGate();
    bro.beRepaired(5);
    bro.takeDammage(2);
    return (0);
}