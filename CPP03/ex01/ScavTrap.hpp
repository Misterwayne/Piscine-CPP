/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:25:39 by mwane             #+#    #+#             */
/*   Updated: 2022/04/18 16:42:00 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & copy);
        ~ScavTrap(void);
        
        ScavTrap&   operator=(ScavTrap const & copy);


        void    attack(std::string const & target) const;
        void    guardGate();
};