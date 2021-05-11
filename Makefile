.PHONY:	all clean fclean re

SRCS	= linear_search.c	\
	  binary_search.c	\
	  selection_sort.c

OBJS	= $(SRCS:.c=.o)

NAME	= libalg.a

CFLAGS	= -Wall -Werror -Wextra

RM	= rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	@ar rc $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean:		clean
	@$(RM) $(NAME)

re:		fclean all
