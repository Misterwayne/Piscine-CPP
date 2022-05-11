/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:54:21 by mwane             #+#    #+#             */
/*   Updated: 2022/05/11 12:41:28 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int     main(void)
{
    const Animal* j = new Dog("Small Dog");
    const Animal* i = new Cat();
    const Animal  **array = new  const Animal*[20];

    for (int i = 0; i < 20; i++)
    {
        if (i < 10)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }
    std::cout << "\n\n";
    for (int i = 0; i < 20; i++)
            array[i]->makeSound();
    std::cout << "\n\n";
    delete j;
    delete i;
    for (int i = 0; i < 20; i++)
    {
        delete array[i];
    }
    delete [] array;
    return 0;
}