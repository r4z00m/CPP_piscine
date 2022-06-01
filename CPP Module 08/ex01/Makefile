NAME	= ex01

SRCS	= main.cpp Span.cpp

OBJS	= $(SRCS:.cpp=.o)

CFLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= c++

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all