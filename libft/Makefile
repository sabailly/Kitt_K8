# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 23:53:25 by sarbaill          #+#    #+#              #
#    Updated: 2018/12/03 00:36:00 by sarbaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.h
SRC = 	ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memset.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_strcat.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strstr.c \
		ft_tolower.c \
		ft_toupper.c \

OBJ = $(SRC : .c = .o)
FLAG = -c -Wall -Wextra -Werror
HEADER = libft.h

all : $(NAME)

$(NAME) : 	$(OBJ)
			@ar rc $(NAME) $(OBJ)
%.o : %.c
			@gcc -c $< $(FLAG)
clean :
			@rm -rf $(OBJ)
fclean :	clean
			@rm -rf $(NAME)
re :		fclean all

