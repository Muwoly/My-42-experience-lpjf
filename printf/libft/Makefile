# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 14:54:38 by lpenelon          #+#    #+#              #
#    Updated: 2022/05/25 15:13:28 by lpenelon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_calloc.c ft_putchar_fd.c ft_putnbr_fd.c  ft_putnbru_fd.c ft_putstr_fd.c \
					ft_strlen.c ft_bzero.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
RUN				= ar rcs

NAME			= libft.a

%.o: %.c
	gcc -c $(CFLAGS) $< -o $(<:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS) 
				$(RUN) $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)