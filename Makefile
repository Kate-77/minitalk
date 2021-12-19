# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 19:40:06 by kmoutaou          #+#    #+#              #
#    Updated: 2021/12/19 14:03:14 by kmoutaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT		= client

SERVER		= server

CC			= cc

FLAGS		= -Wall -Wextra -Werror

all: 		$(CLIENT) $(SERVER)

$(CLIENT)	:
			$(CC) $(FLAGS) srcs/client.c srcs/ft_atoi.c srcs/ft_isdigit.c srcs/ft_putstr_fd.c -o client


$(SERVER):
			$(CC) $(FLAGS) srcs/server.c srcs/ft_putnbr_fd.c srcs/ft_putchar_fd.c -o server

%.o: %.c
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)
			ar rcs $(CLIENT) $(SERVER) ${<:.c=.o}

clean:
			rm -f $(CLIENT) $(SERVER)

fclean: 	clean

re: 		fclean all

.PHONY: 	all re clean fclean 
