/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:41:48 by mwane             #+#    #+#             */
/*   Updated: 2022/04/16 20:30:03 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main(int argc, char **argv)
{
    Harl    Karen;

    if (argc != 2)
        return 0;
    Karen.complain(argv[1]);
    return (0);
}