/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:03:48 by mwane             #+#    #+#             */
/*   Updated: 2022/04/18 17:25:27 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap bro = FragTrap("Mang0");
    bro.attack("Zain");
    bro.highFiveGuys();
    bro.beRepaired(5);
    bro.takeDammage(2);
    return (0);
}