.PHONY = all clean fclean re
CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
# SRCS = ft_strlcpy.c

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS} 
	ar rcs ${NAME}	${OBJS}

%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}
clean:
	rm -f ${OBJS}
fclean:
	rm -f ${OBJS} ${NAME}
re: 
	${MAKE} fclean 
	${MAKE} all	




