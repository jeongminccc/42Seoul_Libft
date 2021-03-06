NAME = libft.a
HEADER = libft.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
		$(AR) $@ $^

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)
		
re : fclean all
