# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 19:40:06 by kmoutaou          #+#    #+#              #
#    Updated: 2021/12/18 23:33:00 by kmoutaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT		= client

SERVER		= server

CC			= cc

FLAGS		= -Wall -Wextra -Werror

CLIENT		= srcs/client.c srcs/ft_atoi.c srcs/ft_isdigit.c

SERVER		= srcs/server.c srcs/ft_putnbr_fd.c srcs/ft_putchar_fd.c srcs/ft_putstr_fd.c

all: 		$(CLIENT) $(SERVER)

$(client):	$(CLIENT) 
			ar rcs $(CLIENT) $(CLIENT)

$(server):	$(SERVER)
			ar rcs $(SERVER) $(SERVER)

%.o: %.c
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)
			ar rcs $(CLIENT) $(SERVER) ${<:.c=.o}

clean:
			rm -f $(CLIENT) $(SERVER)

fclean: 	clean
			rm -f $(CLIENT) $(SERVER)

re: 		fclean all

.PHONY: 	all re clean fclean 
