# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huller <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 16:29:50 by huller            #+#    #+#              #
#    Updated: 2019/04/05 20:41:13 by huller           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH = ./srcs/
HEADER = ./includes/
SRC = $(PATH)ft_putchar.c $(PATH)ft_putstr.c $(PATH)ft_strcmp.c \
	  		$(PATH)ft_strlen.c $(PATH)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -I $(HEADER) -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
