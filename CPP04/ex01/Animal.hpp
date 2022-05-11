/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:05:48 by mwane             #+#    #+#             */
/*   Updated: 2022/04/20 14:00:18 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
    public :
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal(Animal const & copy);

        Animal&     operator=(Animal const & copy);

        virtual void    makeSound() const;
        virtual std::string     getType() const;
    protected :
        std::string _type;
};

#endif