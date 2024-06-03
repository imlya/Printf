# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imatek <imatek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 16:13:16 by imatek            #+#    #+#              #
#    Updated: 2024/06/03 12:35:41 by imatek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FILES = ft_print_c.c ft_printf.c functions.c ft_print_id.c ft_parse.c
CC = cc
FLAGS = -Wall -Wextra -Werror
INCLUDE= ft_printf.h
OBJS = $(FILES .c=.o)

all :  $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -I $(INCLUDE) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean :clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re