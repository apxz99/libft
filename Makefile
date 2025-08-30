# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/29 17:32:46 by sarayapa          #+#    #+#              #
#    Updated: 2025/08/30 21:13:45 by sarayapa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILE = ft_atoi.c     ft_isascii.c  ft_strlen.c ft_isalnum.c \
	   ft_isdigit.c  ft_strncmp.c ft_isalpha.c  ft_isprint.c\

BUILD = build/
SOURCE = 
CC = cc
OBJ = $(FILE)
ARCHIVE = ar rcs
CFLAGS = -Wall -Wextra -Werror

all: $(BUILD) $(NAME) 

$(BUILD):
	mkdir -p $(BUILD)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $(addprefix $(BUILD),$@) 

$(NAME): $(OBJ) 
	$(ARCHIVE) $@ $(addprefix $(BUILD),$^)

clean:
	rm -f $(NAME) 

fclean: clean
	rm -rf $(OBJ) $(BUILD)

re:fclean all

.PHONY: all clean fclean re