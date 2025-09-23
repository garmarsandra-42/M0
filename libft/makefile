# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/22 12:31:57 by sangarci          #+#    #+#              #
#    Updated: 2025/09/23 12:27:06 by sangarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= cc
CFLAGS= -Wall -Wextra -Werror
SOURCE= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c
OBJ= $(SOURCE:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
