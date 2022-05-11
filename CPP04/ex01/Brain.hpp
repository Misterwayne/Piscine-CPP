/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:24:20 by mwane             #+#    #+#             */
/*   Updated: 2022/04/20 15:04:18 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class Brain
{
    public :
        Brain();
        Brain(Brain const & copy);
        ~Brain();
        Brain&      operator=(Brain const &  copy);

        Brain       getBrain();
        std::string *getIdeas() const;
    private :
        std::string *ideas;
};

#endif