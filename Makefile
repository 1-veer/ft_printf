CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

RM = rm -f
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_unsigned.c ft_hexa.c ft_address.c \
       ft_putnbr.c which_one.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS) 
fclean: clean 
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re all 

