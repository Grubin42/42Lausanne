# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 11:22:39 by grubin            #+#    #+#              #
#    Updated: 2022/01/04 15:05:07 by grubin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME1 = server

NAME2 = client

all:
	make -C libft
	$(CC) $(CFLAGS) serveur.c libft/libft.a -o $(NAME1)
	$(CC) $(CFLAGS) client.c libft/libft.a -o $(NAME2)

clean:
	make clean -C libft
	rm -rf serveur.o client.o

fclean : clean
	make fclean -C libft
	rm -rf $(NAME1) $(NAME2)

re : fclean all

.PHONY: all clean fclean re
