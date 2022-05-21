/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 00:55:54 by truepath          #+#    #+#             */
/*   Updated: 2022/05/21 01:06:10 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "iter.hpp"

void incInt(int &a)
{
	a++;
}

void decInt(int &a)
{
	a--;
}

void incFl(float &a)
{
	a += 1.0;
}

void decFl(float &a)
{
	a -= 1.0;
}

int main()
{
	int array[3] = {1, 2, 3};
	float arrayF[3] = {1.5, 2.5, 3.5};

	iter(array, 3, incInt);
	
	std::cout << "Int array after iter: ";
	for (int i = 0; i < 3; i++)
		std::cout << array[i] << " ";
	std::cout << "\n";
	
	iter(arrayF, 3, incFl);
	
	std::cout << "Float array after iter: ";
	for (int i = 0; i < 3; i++)
		std::cout << arrayF[i] << " ";
	std::cout << "\n";

	iter<float, void(float &)>(arrayF, 3, x2);
	
	std::cout << "Int array after iter: ";
	for (int i = 0; i < 3; i++)
		std::cout << arrayF[i] << " ";
	std::cout << "\n";
	
	iter<float, void(float &)>(arrayF, 3, x2);

	std::cout << "Float array after iter: ";
	for (int i = 0; i < 3; i++)
		std::cout << arrayF[i] << " ";
	std::cout << "\n";
	
	return (0);
}