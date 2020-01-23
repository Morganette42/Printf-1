SRC = srcs/ft_printf.c				\
	  srcs/ft_parsing.c				\
	  srcs/init_flags.c 			\
	  srcs/ft_isflag.c				\
	  srcs/ft_display_c.c			\
	  srcs/ft_display_cx.c			\
	  srcs/ft_display_id.c			\
	  srcs/ft_display_p.c			\
	  srcs/ft_display_perc.c		\
	  srcs/ft_display_s.c			\
	  srcs/ft_display_u.c			\
	  srcs/ft_display_x.c			\
	  srcs/ft_is_converter.c		\
	  srcs/ft_isflag.c				\
	  srcs/set_flags.c				\

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
