# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achernys <achernys@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/27 17:30:25 by achernys          #+#    #+#              #
#    Updated: 2017/11/07 20:33:20 by achernys         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strdup.c\
        ft_strlen.c ft_strncpy.c ft_strcat.c ft_strcpy.c ft_strncpy.c ft_strlcat.c ft_strncat.c ft_strchr.c ft_strrchr.c\
        ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_pow.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
        ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c

OFILES = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)


clean:
	rm -f $(OFILES)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
