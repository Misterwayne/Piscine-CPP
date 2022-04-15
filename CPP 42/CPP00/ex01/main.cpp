/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:12:55 by truepath          #+#    #+#             */
/*   Updated: 2022/03/21 18:27:09 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		research(Contact *phonebook, int nb_ppl)
{
	std::cout << "--------------------------------------------\n";
	std::cout << "|    index|first name| last name|  nickname|\n";
	
	for (int i = 0; i < nb_ppl; i++)
		phonebook[i].search_display(i + 1);
	std::cout << "--------------------------------------------\n" << std::endl;
	std::cout << "Choose the contact number";
	
	std::string	input;
	while (1)
	{
		if (!(getline(std::cin, input)))
			return 0;
		if (input.empty())
			std::cout << "Choose the contact number that you want to print the informations: ";
		else if (input.length() > 1 || input[0] == '0' || input[0] - 48 > nb_ppl)
			std::cout << "Number must be between 1 and number of existing contacts: ";
		else
		{
			std::cout << "\nInformation about contact " << input << std::endl;
			phonebook[input[0] - 48 - 1].display();
			std::cout << std::endl;
			break;
		}
	}
	return (1);
}

int     main(void)
{
	Contact		phonebook[8];
	int			nb_ppl = 0;
	std::string	input;
	
	std::cout << "| PHONEBOOK |\n";
	while (1)
	{
		do
		{
			std::cout << "ADD, SEARCH and EXIT\n";
			if (!(getline(std::cin, input)))
				return (0);
		} while(input.empty());

		if (!input.compare("ADD") && nb_ppl < 8)
			phonebook[nb_ppl++].add_contact();
		else if (!input.compare("ADD") && nb_ppl >= 8)
			std::cout << "You reach the maximum contact in this phonebook (8)\n\n";

		else if (!input.compare("SEARCH") && !nb_ppl)
			std::cout << "Please add a contact before doing a research\n\n";
		else if (!input.compare("SEARCH") && !(research(phonebook, nb_ppl)))
			return (0);
		else if (!input.compare("EXIT"))
		{
			std::cout << "Goodbye!\n";
			return (0);
		}
		else
			std::cout << "\nWrong input! \n";
	}
	return (0);
}