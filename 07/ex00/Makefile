# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 19:50:14 by hkamiya           #+#    #+#              #
#    Updated: 2021/01/09 02:58:16 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)
CXX		= clang++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
NAME	= a.out
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all