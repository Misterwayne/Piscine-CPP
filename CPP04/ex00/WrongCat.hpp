/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:54:51 by mwane             #+#    #+#             */
/*   Updated: 2022/04/19 19:57:28 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WCAT_HPP
#define WCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat :  public WrongAnimal
{
    public :
        WrongCat();
        WrongCat(std::string type);
        WrongCat(WrongCat const & copy);
        ~WrongCat();
        
        WrongCat&   operator=(WrongCat const & ani);

        void            makeSound() const;
        std::string     getType() const;
    private :
        std::string _type;
};

#endif