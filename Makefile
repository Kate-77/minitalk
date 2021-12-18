# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 19:40:06 by kmoutaou          #+#    #+#              #
#    Updated: 2021/12/17 22:19:29 by kmoutaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

client		= client

server		= server

CC			= cc

FLAGS		= -Wall -Wextra -Werror

CLIENT		= srcs/client.c

SERVER		= srcs/server.c

HEADERS		= .

all: 		$(client) $(server)

$(client):	$(CLIENT) 
			ar rcs $(client) $(CLIENT)

$(server):	$(SERVER)
			ar rcs $(server) $(SERVER)

%.o: %.c
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I $(HEADERS)
			ar rcs $(client) $(server) ${<:.c=.o}

clean:
			rm -f $(CLIENT) $(SERVER)

fclean: 	clean
			rm -f $(CLIENT) $(SERVER)

re: 		fclean all

.PHONY: 	all re clean fclean 
