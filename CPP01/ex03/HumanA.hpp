/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:21:19 by mwane             #+#    #+#             */
/*   Updated: 2022/04/16 16:36:40 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA 
{
    private:
        std::string name;
        Weapon      arm;
    public :
        void        attack() const;
        HumanA(std::string name, Weapon arm);
        ~HumanA();
};

#endif