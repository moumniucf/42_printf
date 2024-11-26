# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 09:53:31 by youmoumn          #+#    #+#              #
#    Updated: 2024/11/26 18:16:33 by youmoumn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

SRC = ft_printhex ft_putchar.c ft_printhex ft_putnbr.c

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

%.o : %.c $(HEADER)
	@$(CC) -c $< $(CFLAGS) -o $@
	@echo "compiling" $< "to" $@

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)

clean :
	@rm -f $(OBJ)

fclean :
	@rm -f $(NAME) $(OBJ)

re : fclean all

.PHONY : clean fclean