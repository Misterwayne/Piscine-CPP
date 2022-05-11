/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:53:33 by mwane             #+#    #+#             */
/*   Updated: 2022/04/19 19:48:02 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat :  public Animal
{
    public :
        Cat();
        Cat(std::string type);
        Cat(Cat const & copy);
        ~Cat();
        
        Cat&   operator=(Cat const & ani);

        void            makeSound() const;
        std::string     getType() const;
    private :
        std::string _type;
};

#endif