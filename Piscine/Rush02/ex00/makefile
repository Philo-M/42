# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmerzoug <fmerzoug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 14:15:45 by fmerzoug          #+#    #+#              #
#    Updated: 2021/10/31 18:00:03 by fmerzoug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = rush-02
SRCS = ${wildcard *.c}
CFLAGS = -Wall -Werror -Wextra 
OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
		gcc ${OBJS} -o ${NAME} ${CFLAG}
clean :
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
