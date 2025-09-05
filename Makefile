# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarayapa <sarayapa@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/29 17:32:46 by sarayapa          #+#    #+#              #
#    Updated: 2025/09/05 16:25:53 by sarayapa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILE = ft_atoi.c  ft_isalnum.c  ft_isalpha.c \
		ft_isascii.c  ft_isdigit.c  ft_isprint.c \
		ft_memset.c  ft_strlen.c  ft_strncmp.c  \
		ft_tolower.c  ft_toupper.c ft_bzero.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c	ft_strrchr.c ft_memchr.c \
		ft_memcmp.c

BUILD = build/
SOURCE =
CC = cc
OBJ = $(FILE:.c=.o)
ARCHIVE = ar rcs
CFLAGS = -Wall -Wextra -Werror

all: $(BUILD) $(NAME)

$(BUILD):
	mkdir -p $(BUILD)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(addprefix $(BUILD),$@)

$(NAME): $(OBJ)
	$(ARCHIVE) $@ $(addprefix $(BUILD),$^)

do:
	clear && $(CC) $(CLAGS) main.c libft.a -lbsd && ./a.out

rethendo: re do

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(OBJ) $(BUILD)

re:fclean all

.PHONY: all clean fclean re