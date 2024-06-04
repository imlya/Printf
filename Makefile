# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imatek <imatek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 16:13:16 by imatek            #+#    #+#              #
#    Updated: 2024/06/04 15:49:02 by imatek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a
FILES= ft_parse.c ft_print_char.c ft_print_id.c \
		ft_print_percent.c ft_print_string.c \
		ft_printf.c functions.c ft_print_unsigned.c \
		ft_print_hexa.c ft_print_ptr.c
CC= cc
FLAGS= -Wall -Wextra -Werror
INCLUDE= include
OBJS= $(FILES:.c=.o)

all:  $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -I include -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re