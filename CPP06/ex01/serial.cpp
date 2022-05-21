/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:33:17 by truepath          #+#    #+#             */
/*   Updated: 2022/05/20 22:10:16 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t   serialize(t_data *ptr)
{
    return (static_cast<uintptr_t>(ptr->_data));
}

t_data*   deserialize(uintptr_t raw)
{
    t_data *j = new t_data;
    j->_data = raw;
    return (j);
}

int main()
{
    t_data j;
    t_data *p;

    j._data = 9;
    p = deserialize(serialize(&j));
    std::cout<<j._data<<"\n";
    std::cout<<p->_data<<"\n";

    delete p;
    return (0);
}