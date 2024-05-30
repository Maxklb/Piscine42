# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 17:34:07 by mkoch-le          #+#    #+#              #
#    Updated: 2022/07/24 20:07:00 by mkoch-le         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush02

SRC = *.c

$(NAME): gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

CLEAN: rm -f *.swp

FCLEAN: CLEAN
	rm -f $(NAME)

RE: fclean all
