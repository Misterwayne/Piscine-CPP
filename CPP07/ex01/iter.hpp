/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 00:44:22 by truepath          #+#    #+#             */
/*   Updated: 2022/05/21 00:57:08 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T, typename P>
void    iter(T array[], size_t size, P f)
{
    for (int i = 0; i < size; i++)
        f(array[i]);
}

template<typename T>
void x2(T &t)
{
	t = t * 2;
}

#endif