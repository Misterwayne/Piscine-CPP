/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:51:17 by mwane             #+#    #+#             */
/*   Updated: 2022/04/19 19:54:38 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WANIMAL_HPP
#define WANIMAL_HPP

#include<iostream>
#include<string>

class WrongAnimal
{
    public :
        WrongAnimal();
        WrongAnimal(std::string type);
        ~WrongAnimal();
        WrongAnimal(WrongAnimal const & copy);

        WrongAnimal&     operator=(WrongAnimal const & copy);

        void    makeSound() const;
        std::string     getType() const;
    protected :
        std::string _type;
};

#endif