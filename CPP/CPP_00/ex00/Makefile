# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 16:00:46 by pmandel           #+#    #+#              #
#    Updated: 2022/04/04 14:26:36 by pmandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = megaphone

SRCS     = megaphone.cpp
OBJS     = $(SRCS:.cpp=.o)

CC      = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re