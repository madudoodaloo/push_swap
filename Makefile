
NAME = push_swap

SRCS		=	lists/ft_lstaddback.c \
lists/ft_lstaddfront.c \
lists/ft_lstclear.c \
lists/ft_lstgetlast.c \
lists/ft_lstnew.c \
lists/ft_lstsize.c \
moves/push.c \
moves/rev_rotate.c \
moves/rotate.c \
moves/swap.c \
utils/checkers.c \
utils/utils.c \
utils/atoi.c \
utils/split.c \
utils/libft.c \
algs/alg3.c \
algs/alg5.c \
algs/alg100.c \
algs/alg500.c \
main.c 


OBJS	=	${SRCS:.c=.o}
CC =cc
RM =rm -rf
CFLAGS = -Wall -Werror -Wextra -g #-fsanitize=address

all: $(NAME)

$(NAME): $(OBJS)
			${CC} ${CFLAGS} $(OBJS) -o ${NAME}
clean:
	$(RM)	$(OBJS)

fclean: clean
		@rm -rf ${NAME}
 
re:	fclean	$(NAME)