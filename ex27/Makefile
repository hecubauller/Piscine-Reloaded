# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huller <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 13:08:55 by huller            #+#    #+#              #
#    Updated: 2019/04/07 16:07:19 by huller           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_display_file

SRC =	ft_display_file.c

FLAGS = -Wall -Wextra -Werror

OBJECT = ft_display_file.o

all:	$(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean:
	rm -f $(OBJECT)

fclean:
	rm -f ft_display_file.o $(NAME)
