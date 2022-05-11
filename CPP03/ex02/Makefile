# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwane <mwane@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 17:26:35 by mwane             #+#    #+#              #
#    Updated: 2022/04/18 17:23:48 by mwane            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

FLAGS 	= -Wall -Werror -Wextra -std=c++98

CC	 	= clang++

OBJ		= $(SRCS:.cpp=.o)

NAME	= FragTrap


all :	$(NAME)

$(NAME) :	$(OBJ)
			$(CC) -o $(NAME) $(FLAGS) $(OBJ)

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

%.o 	:	%.cpp
			$(CC) $(FLAGS) -o $@ -c $<