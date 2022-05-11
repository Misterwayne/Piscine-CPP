/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:16:59 by mwane             #+#    #+#             */
/*   Updated: 2022/04/18 16:28:55 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap jon = ClapTrap("Jon");

	jon.attack("joe");
	jon.takeDammage(4);
	jon.beRepaired(3);
	return 0;
}