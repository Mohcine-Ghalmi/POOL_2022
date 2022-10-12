SRCS   = do_op.c ft_add.c ft_sub.c ft_mul.c ft_mod.c ft_atoi.c ft_div.c ft_putnbr.c
OBJS   = ${SRCS:.c=.o}
NAME   = do-op
CC	   = gcc
RM	   = rm -f
CFLAGS = -Wall -Wextra -Werror

all:
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean :
	${RM} ${NAME}

re : fclean all
