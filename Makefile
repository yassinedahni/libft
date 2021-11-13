NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CC = gcc
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_memcmp.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_strnstr.c
OBJ = ${SRC:.c=.o}

all : $(NAME)

$(NAME) : $(OBJ)
		ar -rc $(NAME) $(OBJ)
$(OBJ) :
		$(CC) $(FLAGS) -c $(SRC)
clean :
		rm -rf $(OBJ)
fclean : clean
		rm -rf $(NAME)
re : fclean all