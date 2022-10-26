# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 15:43:42 by pmandel           #+#    #+#              #
#    Updated: 2021/12/13 16:57:29 by pmandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

CC				= gcc
RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -g

SRCS	= \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c

SRCS_BONUS = \
ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstdelone.c \
ft_lstlast.c \
ft_lstnew.c \
ft_lstsize.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c

OBJS			= $(SRCS:.c=.o)

OBJS_BONUS		= $(SRCS_BONUS:.c=.o)

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I.

all:			$(NAME)

$(NAME):		$(OBJS)
					ar rcs $(NAME) $(OBJS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS_BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BONUS)

clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
				$(RM) $(NAME) $(NAME_BONUS)

bonus:			$(OBJS_BONUS)
					ar rcs $(NAME) $(OBJS_BONUS)

re:				fclean all

.PHONY:			all clean fclean re
