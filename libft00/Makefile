# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achernys <achernys@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/27 17:30:25 by achernys          #+#    #+#              #
#    Updated: 2017/10/27 17:41:53 by achernys         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = ./*.c

OFILES = ./*.o

all: $(NAME)

$(NAME):
	gcc -Includes -Wall -Wextra -Werror -c $(SRC)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
