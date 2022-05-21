# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: truepath <truepath@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 17:26:35 by mwane             #+#    #+#              #
#    Updated: 2022/05/20 22:52:38 by truepath         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= serial.cpp

FLAGS 	= -Wall -Werror -Wextra -std=c++98

CC	 	= clang++

OBJ		= $(SRCS:.cpp=.o)

NAME	= Serial


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