/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:17:20 by truepath          #+#    #+#             */
/*   Updated: 2022/03/21 18:24:34 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "phonebook.hpp"

Contact::Contact()
{
    field_name[0] = "first name";
	field_name[1] = "last name";
	field_name[2] = "nickname";
	field_name[3] = "login";
	field_name[4] = "postal address";
	field_name[5] = "email address";
	field_name[6] = "phone number";
	field_name[7] = "birthday date";
	field_name[8] = "favorite meal";
	field_name[9] = "underwear color";
	field_name[10] = "darkest secret";
};


void    Contact::add_contact(void)
{
    for (int i = 0; i < 11; i++)
    {
        do
        {
            std::cout << field_name[i] << " : ";
            getline(std::cin, info[i]);
        } while (info[i].empty());
    }
    std::cout << "Conctact added!\n\n";
}

void   Contact::display(void)
{
    for (int i = 0; i < 11; i++)
        std::cout<< field_name[i] << " : " << info[i] << std::endl;
}

void    Contact::search_display(int index)
{
    std::string tmp;
	
	std::cout << "|        " << index << "|";
	for (int i = 0; i < 3; i++)
	{
		tmp = info[i];
		if (tmp.length() <= 10)
			std::cout << std::setw(10) << tmp << "|";
		else
		{
			tmp.resize(9);
			std::cout << tmp << "." << "|";
		}
	}
	std::cout << std::endl;;
}