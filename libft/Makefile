SRCS	= main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
# ${SRCS:.c=.o}	only recompile non existing .o (skip the already existing .o)
OBJS	= ${SRCS:.c=.o}	
NAME	= libft.a
INS		= includes
RUN		= ar rc
CC		= gcc
# rm -f avoid errors when deleting already deleted .o files
RM		= rm -f
RL		= ranlib
CFLAGS	= -Wall -Wextra -Werror

# Hidden rule, include by default in a Makefile. Convert .o into .c
.c.o:
		${CC} ${CFLAGS} -fsanitize=address -c $< -o ${<:.c=.o}
# ${CC} ${CGLAGS} -c $< -o ${<:.c=.o} -I${INS}

# OBJS create .o // RUN (ar rc) create the .a from the .o files // ranlib optimize the compilation with an index
${NAME}:	${OBJS}
			${RUN} ${NAME} ${OBJS}
			${RL} ${NAME}
			${CC} -o a.out ${NAME} ${SRCS}

# All is the default rule, conventional name
#We call another func (libft.a) in order to link only in case we need to redo the file (optimized)
all:		${NAME}

# Delete the .o files
clean:
			${RM} ${OBJS}

# Delete de binary file, the .a
fclean:		clean
			${RM} ${NAME}

# re: Force la recompilation by deleting then compile again
re:			fclean all
# .PHONY permet de ne pas interepreter certaines regles (avoid up to date)
.PHONY:		all clean fclean re .c.o


