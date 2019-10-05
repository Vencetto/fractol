NAME = fractol

SRC =	src/main.c src/additional.c src/draw.c

OBJ =	main.o additional.o draw.o

FLAGS = -Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit -fsanitize=address

all: $(NAME)

$(OBJ): $(SRC)
	@gcc -c $(SRC) -I ./includes

$(NAME): $(OBJ)
	#@make -C libft
	@gcc $(FLAGS) $(OBJ) -o $(NAME) -L./libft -lft 
	@echo "make for fractol: Done" 

clean:
	@rm -f $(OBJ)
	#@make -C libft clean

fclean: clean
	@rm -f $(NAME)
	#@make -C libft fclean

re: fclean all
