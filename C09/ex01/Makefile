CC = gcc

CFLAGS = -Wall -Wextra -Werror -I includes

HEADERS = includes/ft.h

SRC = ./srcs/ft_putchar.c \
        ./srcs/ft_swap.c \
        ./srcs/ft_putstr.c \
        ./srcs/ft_strlen.c \
        ./srcs/ft_strcmp.c

OBJ = ${SRC:.c=.o}
NAME = libft.a

all:    ${NAME}

${NAME}:	${OBJ}
		ar rcs ${NAME} ${OBJ}
		ranlib ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
