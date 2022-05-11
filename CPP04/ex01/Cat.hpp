/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:53:33 by mwane             #+#    #+#             */
/*   Updated: 2022/04/20 16:23:14 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

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
        Brain           *getBrain() const;
    private :
        std::string _type;
        Brain       *cerveau;
};

#endif