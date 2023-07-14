# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:51:38 by dabdygal          #+#    #+#              #
#    Updated: 2023/03/14 15:35:50 by dabdygal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a

CC			= cc

SRC_FOLDER 	= srcs

SRC_FILES 	= ft_putchar.c	
			
OBJECTS		= $(SRC_FILES:.c=.o)

INC_FOLDER 	= includes

INC_FILES 	= ft.h

CFLAGS		= -Wall -Wextra -Werror -I $(INC_FOLDER)


all: $(NAME)

$(NAME): 		$(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	ar rc $(NAME) $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	ranlib $(NAME)

$(addprefix $(SRC_FOLDER)/,$(OBJECTS)): 	$(addprefix $(SRC_FOLDER)/,$(SRC_FILES))
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(addprefix $(SRC_FOLDER)/,$(OBJECTS))

fclean: clean
	rm -f $(NAME)

re: fclean all
