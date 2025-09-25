# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sangarci <sangarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/22 12:31:57 by sangarci          #+#    #+#              #
#    Updated: 2025/09/24 15:03:05 by sangarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= cc
CFLAGS= -Wall -Wextra -Werror
SOURCE= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
        ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcat.c \
        ft_memmove.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strncmp.c \
		ft_strnstr.c ft_strchr.c ft_strrchr.c
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

re: fclean al