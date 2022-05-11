/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:45:30 by mwane             #+#    #+#             */
/*   Updated: 2022/04/20 16:31:24 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : ideas(new std::string [100])
{
    std::cout<< "Brain constructor called\n";
}

Brain::Brain(Brain const & copy)
{
    std::cout<< "Brain copy constructor called\n";
    this->ideas = new std::string [100];
    (*this) = copy;
}

Brain   &Brain::operator=(Brain const & copy)
{
    if (this != &copy)
    {
        std::cout<< "Brain deep copy constructor called\n";
        *(this->ideas) = *(copy.getIdeas());
    }
    return (*this);
}

Brain::~Brain()
{
    delete [] this->ideas;
    std::cout<< "Brain destructor called\n";
}

Brain   Brain::getBrain()
{
    return (*this);
}

std::string *Brain::getIdeas() const
{
    return (this->ideas);
}