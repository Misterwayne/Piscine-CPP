/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 22:20:04 by truepath          #+#    #+#             */
/*   Updated: 2022/05/20 22:45:09 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identifyref(Base& p)
{
    std::cout<<"from ref :\n";
    try
	{
		A& refA = dynamic_cast<A&>(p);
		(void)refA;
		std::cout << "class type: A\n";;
		return ;
	}
	catch (...) {}
	
	try
	{
		B& refB = dynamic_cast<B&>(p);
		(void)refB;
		std::cout << "class type: B\n";;
		return ;
	}
	catch (...) {}

	try
	{
		C& refC = dynamic_cast<C&>(p);
		(void)refC;
		std::cout << "class type: C\n";;
	}
	catch (...) {} 
}

void identifyptr(Base* p)
{
    A* ptr1 = dynamic_cast<A*>(p);
    std::cout<<"from ptr :\n";
    if (ptr1)
	{
		std::cout << "class type: A\n";;
		return ;
	}
    B* ptr2 = dynamic_cast<B*>(p);
    if (ptr2)
	{
		std::cout << "class type: B\n";
		return ;
	}
    C* ptr3 = dynamic_cast<C*>(p);
    if (ptr3)
	{
		std::cout << "class type: C\n";
		return ;
	}
}

Base * generate(void)
{
    int	nb = rand() % 3;

	if (!nb)
	{
		std::cout << "new A class created\n";
		return new A;
	}
	else if (nb == 1)
	{
		std::cout << "new B class created\n";
		return new B;
	}
	std::cout << "new C class created\n";
	return new C;   
}

int main()
{
    srand(time(0));
    Base *p;

    p = generate();
    identifyptr(p);
    identifyref(*p);

    return(0);
}