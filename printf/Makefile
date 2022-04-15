# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loris <loris@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 15:57:47 by loris             #+#    #+#              #
#    Updated: 2022/04/13 18:50:33 by loris            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	srcs/ft_printf.c \
		srcs/ft_printf_funcs1.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	gcc -c $(CFLAGS) -I headers $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	rm -f $(NAME) $(OBJS)

fclean:
	$(MAKE) fclean -C ./libft
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re