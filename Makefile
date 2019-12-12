#################
##  VARIABLES  ##
#################

#	Sources

SRC			=	

SRC_BONUS	=	


#	Includes
INCLUDES		=	lib_printf.h		

#	Objects
OBJS		= 	${SRC:.c=.o}

OBJS_B		=	${SRC_BONUS:.c=.o}

#	Output
NAME		= 	lib_printf.a

#	Compiler
CFLAGS		=	-Werror -Wall -Wextra



RM			= 	rm -rf

AR			= 	ar rcs

CC			= 	gcc

ATTRIBUT 	= 	-c

#	Rules

all:			${NAME} bonus

-c.o:			
				${CC} ${CFLAGS} ${ATTRIBUT} $< -o $(<:.c=.o) -I${INCLUDES}

${NAME}:		${OBJS}
				${AR} ${NAME} ${OBJS}

clean:			
				${RM} ${OBJS} ${OBJS_B}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

bonus:			${OBJS} ${OBJS_B}
				${AR} ${NAME} ${OBJS} ${OBJS_B}

.PHONY:			all clean fclean re bonus
