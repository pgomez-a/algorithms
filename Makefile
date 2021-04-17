.PHONY:	all clean fclean re

SRCS	= binary_search.c	\
	  selection_sort.c

OBJS	= $(SRCS:.c=.o)

NAME	= libalg.a

RM	= rm -f

$(NAME):	$(OBJS)
	@ar rc $(NAME) $(OBJS)

all:	$(NAME)

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all
