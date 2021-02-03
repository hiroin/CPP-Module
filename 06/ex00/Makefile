# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 19:50:14 by hkamiya           #+#    #+#              #
#    Updated: 2021/02/03 03:25:27 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Cast.cpp
OBJS	= $(SRCS:.cpp=.o)
CXX		= clang++
RM		= rm -f
CFLAGS	= -g -Wall -Wextra -Werror -fsanitize=undefined,address
NAME	= convert
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all