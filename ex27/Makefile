# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emorillo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 21:00:32 by emorillo          #+#    #+#              #
#    Updated: 2024/09/23 13:03:44 by emorillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I includes
CLEAR = rm -rf
NAME = ft_display_file 
OBJS = *.c

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(CLEAR) *.o

fclean: clean
	$(CLEAR) $(NAME)

re: fclean all

