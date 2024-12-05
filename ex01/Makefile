# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 12:42:21 by thlefebv          #+#    #+#              #
#    Updated: 2024/11/23 16:31:21 by thlefebv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= span

CC= c++

CPPFLAGS= -Wall -Wextra -Werror -std=c++98

SRC= main.cpp\
	 Span.cpp\

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all