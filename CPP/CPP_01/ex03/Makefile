# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmandel <pmandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 12:16:23 by pmandel           #+#    #+#              #
#    Updated: 2022/03/23 15:05:12 by pmandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = violence

SRCS     = \
main.cpp \
Weapon.cpp \
HumanA.cpp \
HumanB.cpp

OBJS     = $(SRCS:.cpp=.o)

CC      = g++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98

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