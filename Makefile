# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/01 23:48:59 by jsilance          #+#    #+#              #
#    Updated: 2020/12/03 02:19:16 by jsilance         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell


SRC =	main.c libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c \
		libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c \
		libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c \
		libft/ft_isdigit.c libft/ft_isprint.c libft/ft_memccpy.c \
		libft/ft_memmove.c libft/ft_memset.c libft/ft_strchr.c \
		libft/ft_strdup.c libft/ft_strlcat.c libft/ft_strlcpy.c \
		libft/ft_strlen.c libft/ft_strncmp.c libft/ft_strnstr.c \
		libft/ft_strrchr.c libft/ft_tolower.c libft/ft_toupper.c \
		libft/ft_substr.c libft/ft_strjoin.c libft/ft_strtrim.c \
		libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c \
		libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c \
		libft/ft_putnbr_fd.c libft/ft_lstnew_bonus.c \
		libft/ft_lstadd_front_bonus.c libft/ft_lstsize_bonus.c \
		libft/ft_lstadd_back_bonus.c libft/ft_lstdelone_bonus.c \
		libft/ft_lstclear_bonus.c libft/ft_lstiter_bonus.c \
		libft/ft_lstmap_bonus.c libft/ft_lstlast_bonus.c libft/ft_itoa_base.c \
		gnl/get_next_line.c lexer/main_lexer.c error/error.c \
		parser/main_parser.c \


FLAGS =	-Wall -Wextra -Werror

OBJ =	$(SRC:.c=.o)

%.o: %.c
		@gcc -c -o $@ $?

all:	${NAME}

${NAME}: ${OBJ}
		@echo "Compilation..."
		@gcc ${FLAGS} ${OBJ} -o ${NAME}
		@echo "Compilation complete!"

re:		fclean all

clean:
		@echo "Cleaning..."
		@/bin/rm -f ${OBJ}
		@echo "Cleaning complete!"

fclean:	clean
		@/bin/rm -f ${NAME}

rerun:	re clean
		./${NAME}

.PHONY: all re clean fclean rerun