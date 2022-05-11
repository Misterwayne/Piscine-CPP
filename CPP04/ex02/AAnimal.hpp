/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:05:48 by mwane             #+#    #+#             */
/*   Updated: 2022/05/11 12:42:40 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
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

        virtual void            makeSound() const = 0;
        virtual std::string     getType() const;
    protected :
        std::string _type;
};

#endif