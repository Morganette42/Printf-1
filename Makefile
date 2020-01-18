SRC = srcs/ft_printf.c				\
	  srcs/ft_parsing.c				\
	  srcs/init_flags.c 			\
	  srcs/ft_isflag.c				\
	  srcs/display_functions_1.c	\

OBJS = ${SRC:.c=.o}

INCLUDES = includes

LIBFT = Libft

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

RM			= 	rm -rf

AR			= 	ar rcs

CC			= 	gcc

ATTRIBUT 	= 	-c

all: ${NAME}

-c.o:	${CC} ${CFLAGS} ${ATTRIBUT} $< -o $(<:.c=.o) -I${INCLUDES}

$(NAME): ${OBJS}
	make -C ${LIBFT}
	cp Libft/libft.a ./$(NAME)
	ar -rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}
	make clean -C ${LIBFT}

fclean : clean
	rm -f ${NAME}
	make fclean -C ${LIBFT}

re: fclean all

.PHONY: clean all fclean re
