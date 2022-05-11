/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:19:51 by mwane             #+#    #+#             */
/*   Updated: 2022/05/11 12:42:57 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog :  public Animal
{
    public :
        Dog();
        Dog(std::string type);
        Dog(Dog const & copy);
        ~Dog();

        Dog&   operator=(Dog const & ani);
        
        void            makeSound() const;
        std::string     getType() const;
        Brain           *getBrain() const;
    private :
        std::string _type;
        Brain       *cerveau;
};

#endif