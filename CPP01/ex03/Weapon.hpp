/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:10:11 by mwane             #+#    #+#             */
/*   Updated: 2022/04/16 15:46:38 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon 
{
    private:
        std::string type;
    public:
        std::string getType() const;
        void        setType(std::string type);
        Weapon(std::string type);
        ~Weapon();
        
};

#endif