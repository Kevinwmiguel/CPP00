# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/02 22:36:55 by kwillian          #+#    #+#              #
#    Updated: 2026/02/02 22:51:21 by kwillian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = PhoneBook
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRCS        = PhoneBook.cpp Contact.cpp
OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all