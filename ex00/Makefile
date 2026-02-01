# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/01 23:35:33 by kwillian          #+#    #+#              #
#    Updated: 2026/02/01 23:36:02 by kwillian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = Megaphone
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRCS        = Megaphone.cpp
OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all