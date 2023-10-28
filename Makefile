NAME = libftprintf.a

SRCS = ft_printf.c ft_putnbrs.c

OBJ = $(SRCS:.c=.o)

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror

%.o : %c
	gcc $(FLAGS) -c $< -I$(HEADER) -o $@

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	
all : $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re