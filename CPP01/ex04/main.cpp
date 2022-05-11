/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:40:58 by mwane             #+#    #+#             */
/*   Updated: 2022/04/16 18:40:24 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int     main(int argc, char **argv)
{
    std::string     line;
    std::ifstream   file;
    std::ofstream   out_file;
    std::string     file_name;
    int             pos;
    
    if (argc != 3)
        error_msg("waiting for 3 arugument");

    file_name = "test.txt";
    file.open(file_name);
    if (!(file.is_open()))
        error_msg("can't open file");
    pos = file_name.rfind(".txt");
    file_name.erase(pos, 4);
    file_name.insert(pos, ".replace");
    out_file.open(file_name);

    std::getline(file, line);
    while (file)
    {
        replace(line, argv[1], argv[2]);
        out_file << line <<std::endl;
        line.clear();
        std::getline(file, line);
    }
    replace(line, argv[1], argv[2]);
    out_file << line;
    line.clear();
    file.close();
    out_file.close();
    return (0);
}