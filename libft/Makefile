# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 23:53:25 by sarbaill          #+#    #+#              #
#    Updated: 2018/12/28 19:31:59 by sarbaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memset.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memmove.c \
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
		ft_strlcat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_strclr.c \
		ft_putnbr_fd.c \
		ft_memalloc.c \
		ft_memdel.c \

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJ)
			ar rcs $(NAME) $(OBJ)

%.o : %.c
			gcc -c $< $(FLAG)

clean :
			rm -rf $(OBJ)

fclean :	clean
			rm -rf $(NAME)

re :		fclean all

