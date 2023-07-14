# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:51:38 by dabdygal          #+#    #+#              #
#    Updated: 2023/03/13 11:26:03 by dabdygal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN_NAME	= do-op

CC			= cc

MAIN_SRC	= do-op.c

MAIN_FOLDER = .

SRC_FOLDER 	= srcs

SRC_FILES 	= ft_atoi.c \
			 ft_sum.c \
			 ft_subtract.c \
			 ft_multiplicate.c \
			 ft_divide.c \
			 ft_modulo.c \
			 ft_putnbr.c \
			 ft_putstr.c

OBJECTS		= $(SRC_FILES:.c=.o)

INC_FOLDER 	= includes

LIB_FOLDER	= .

LIB_NAME	= libc11ex05.a

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
