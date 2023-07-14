# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:51:38 by dabdygal          #+#    #+#              #
#    Updated: 2023/03/11 20:57:43 by dabdygal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN_NAME	= ft_display_file

CC			= cc

MAIN_SRC	= main.c

SRC_FOLDER 	= .

SRC_FILES 	= ft_put_error.c	\
			  ft_check_argc.c   \

OBJECTS		= $(SRC_FILES:.c=.o)

INC_FOLDER 	= .

LIB_FOLDER	= .

LIB_NAME	= libc10ex00.a

CFLAGS		= -Wall -Wextra -Werror -I $(INC_FOLDER)


all: $(BIN_NAME)

$(BIN_NAME):		$(addprefix $(LIB_FOLDER)/,$(LIB_NAME)) $(MAIN_SRC)
	$(CC) $(CFLAGS) $(MAIN_SRC) -L$(LIB_FOLDER) $(LIB_NAME) -o $@

$(LIB_NAME): 		$(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	ar rc $(addprefix $(LIB_FOLDER)/,$(LIB_NAME)) $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	ranlib $(LIB_NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(addprefix $(SRC_FOLDER)/,$(OBJECTS))
	rm -f $(addprefix $(LIB_FOLDER)/,$(LIB_NAME))

fclean: clean
	rm -f $(BIN_NAME)

re: fclean all
