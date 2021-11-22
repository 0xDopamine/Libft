#_*_ Makefile _*_

CC := cc
CFLAGS :=  -c -Wall -Werror -Wextra
SRCS := ft_lstnew.c ft_lstlast.c ft_lstadd_back.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_substr.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_itoa.c ft_striteri.c ft_strmapi.c ft_split.c ft_strjoin.c ft_atoi.c ft_strtrim.c ft_strlcat.c ft_strlcpy.c ft_bzero.c ft_tolower.c ft_toupper.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlen.c ft_strnstr.c ft_calloc.c ft_isalpha.c ft_memcpy.c ft_isdigit.c ft_memchr.c ft_memset.c ft_strdup.c ft_strncmp.c ft_strrchr.c ft_isalnum.c
NAME := libft.a
OBJS := ${SRCS:.c=.o}

re: all

all: $(NAME) clean

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) $(SRCS)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)