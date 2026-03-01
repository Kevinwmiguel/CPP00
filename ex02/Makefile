NAME		= Account
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Wextra -std=c++98

SRCS		= Account.cpp tests.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

