/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:19:52 by truepath          #+#    #+#             */
/*   Updated: 2022/03/21 18:22:52 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define  PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Contact {
    private:
        std::string info[11];
        std::string field_name[11];

    public:
        Contact();
        void add_contact();
        void display();
        void search_display(int index);

};

#endif