# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 08:42:33 by aklimchu          #+#    #+#              #
#    Updated: 2024/03/07 11:53:19 by aklimchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ./srcs/ft_putchar.c \
	./srcs/ft_swap.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strlen.c \
	./srcs/ft_strcmp.c

OBJ = $(SRC:.c=.o)

INCLUDE = ./includes

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $^ -c -o $@ -I $(INCLUDE)

$(NAME): $(OBJ)
	ar -rc libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
