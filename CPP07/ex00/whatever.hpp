/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 00:17:53 by truepath          #+#    #+#             */
/*   Updated: 2022/05/21 00:34:08 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T &a, T&b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T& max(T &a, T &b)
{
    return a < b ? b:a;
}

template <typename T>
T& min(T &a, T &b)
{
    return a > b ? b:a;
}

#endif