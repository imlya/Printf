# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imatek <imatek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 16:13:16 by imatek            #+#    #+#              #
#    Updated: 2024/05/30 20:45:49 by imatek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FILES = 
OBJS = $(FILES .c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror

all :  $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -I $(INCLUDE) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean :clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re