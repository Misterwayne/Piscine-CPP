/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:16:25 by mwane             #+#    #+#             */
/*   Updated: 2022/04/18 17:22:13 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & copy);
        ~FragTrap(void);
        
        FragTrap&   operator=(FragTrap const & copy);

        void    highFiveGuys(void) const;
};