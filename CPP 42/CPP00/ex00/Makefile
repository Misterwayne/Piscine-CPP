# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: truepath <truepath@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 16:54:41 by truepath          #+#    #+#              #
#    Updated: 2022/03/21 17:06:49 by truepath         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= megaphone.cpp

FLAGS 	= -Wall -Werror -Wextra

CC	 	= clang++

OBJ		= $(SRCS:.cpp=.o)

NAME	= megaphone


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