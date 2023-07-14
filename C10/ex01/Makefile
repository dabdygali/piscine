# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:51:38 by dabdygal          #+#    #+#              #
#    Updated: 2023/03/15 17:50:10 by dabdygal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN_NAME	= ft_cat

CC			= cc

MAIN_SRC	= ft_cat.c

MAIN_FOLDER = .

SRC_FOLDER 	= srcs

SRC_FILES 	= ft_putstr.c \
			  ft_put_error.c \
			  ft_cat_stdin.c \
			  ft_cat_file.c

OBJECTS		= $(SRC_FILES:.c=.o)

INC_FOLDER 	= includes

LIB_FOLDER	= .

LIB_NAME	= lib_ft_cat.a

CFLAGS		= -Wall -Wextra -Werror -I $(INC_FOLDER)


all: $(BIN_NAME)

$(BIN_NAME): $(addprefix $(LIB_FOLDER)/,$(LIB_NAME)) $(addprefix $(MAIN_FOLDER)/,$(MAIN_SRC))
	$(CC) $(CFLAGS) $(addprefix $(MAIN_FOLDER)/,$(MAIN_SRC)) -L$(LIB_FOLDER) $(LIB_NAME) -o $@

$(addprefix $(LIB_FOLDER)/,$(LIB_NAME)): $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	ar rc $(addprefix $(LIB_FOLDER)/,$(LIB_NAME)) $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	ranlib $(addprefix $(LIB_FOLDER)/,$(LIB_NAME))

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	rm -f $(addprefix $(LIB_FOLDER)/,$(LIB_NAME))

fclean: clean
	rm -f $(BIN_NAME)

re: fclean all
