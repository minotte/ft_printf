# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nminotte <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 18:19:07 by nminotte          #+#    #+#              #
#    Updated: 2022/11/11 16:40:08 by nminotte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

SRC = ft_printf.c\
      src/ft_putchar.c\
      src/ft_putstr.c\
	  src/ft_strlen.c\
      src/ft_putbase.c\
      src/ft_putnbr.c\
      src/ft_putnbr_unsign.c\
      src/ft_putaddress.c\
     
CC =  gcc

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

all : ${NAME}

clean : 
	rm -rf $(OBJ)
	
fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean re fclean
