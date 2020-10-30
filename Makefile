NAME = libft.a

SRCS = *.c

OUT = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c ft_*.c -I 
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	rm -f $(OUT)

fclean:	clean
	rm -f $(NAME)

re: fclean all
