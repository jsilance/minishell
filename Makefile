# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsilance <jsilance@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/01 23:48:59 by jsilance          #+#    #+#              #
#    Updated: 2020/12/02 00:05:33 by jsilance         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell


SRC =	main.c


FLAGS =	-WALL -Wextra -Werror

OBJ =	$(SRC:.c=.o)

%.o: %.c
		@gcc -c -o $@ $?

all:	${NAME}

${NAME}: $OBJ
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

rerun:	re
		./${NAME}

.PHONY: all re clean fclean rerun