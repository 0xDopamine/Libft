#_*_ Makefile _*_

CC := cc
CFLAGS := -c -g -Wall -Werror -Wextra
SRCS := ft_atoi.c ft_substr.c ft_strlcat.c ft_strlcpy.c ft_bzero.c ft_tolower.c ft_toupper.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlen.c ft_strjoin.c ft_strnstr.c ft_calloc.c ft_isalpha.c ft_memcpy.c ft_isdigit.c ft_memchr.c ft_memset.c ft_strdup.c ft_strncmp.c ft_strrchr.c ft_isalnum.c
NAME := libft.a
OBJS := ${SRCS:.c=.o}

re: all

all: $(NAME) clean

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) $(SRCS)
.PHONY: clean all
clean:
	rm -f *.o
fclean:
	rm -f $(NAME)