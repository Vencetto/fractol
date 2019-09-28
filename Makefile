# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzomber <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/08 18:34:19 by vzomber           #+#    #+#              #
#    Updated: 2018/03/08 18:34:20 by vzomber          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

SRC =	src/main.c

OBJ =	$(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(OBJ): $(SRC) includes/
	@gcc  -c $(SRC) 

$(NAME): $(OBJ) includes/
	@make -C libft
	@gcc $(FLAGS) $(OBJ) -o $(NAME) -L./libft -lft 
	@echo "make for fractol: Done"

clean:
	@rm -f $(OBJ)
	@make -C libft clean

fclean: clean
	@rm -f $(NAME)
	@make -C libft fclean

re: fclean all