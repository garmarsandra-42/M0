# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/22 12:31:57 by sangarci          #+#    #+#              #
#    Updated: 2025/09/22 15:33:26 by sangarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= cc
CFLAGS= -Wall -Wextra -Werror
SOURCE= ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_strlen.o
OBJ= $(SOURCE: .c= .o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
