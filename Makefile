NAME = push_swap


SRCS =  $(wildcard src/*.c )


OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

RM = rm -rf

all: ${NAME}
${NAME}: ${OBJS}
	@${MAKE} -C ./libft
	@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}


clean: 
	@${MAKE} -C ./libft fclean
	@${RM} ${OBJS}


fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re