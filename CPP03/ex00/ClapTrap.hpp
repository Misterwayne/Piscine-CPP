/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:17:06 by mwane             #+#    #+#             */
/*   Updated: 2022/04/18 14:51:44 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap
{
    private :
        std::string _name;
        int         hp;
        int         energy;
        int         attackpoint;
    
    public :

        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap& operator=(const ClapTrap &clap);

        void        attack(const std::string &target);
        void        takeDammage(unsigned int amount);
        void        beRepaired(unsigned  int amount);
};