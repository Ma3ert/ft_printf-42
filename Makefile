# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yait-iaz <yait-iaz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 17:13:21 by yait-iaz          #+#    #+#              #
#    Updated: 2021/11/30 13:05:07 by yait-iaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf_hex.c ft_printf_put.c ft_printf.c


NAME = libftprintf.a
HEADER = libftprintf.h

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c
	$(CC) -c  $< $(FLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
