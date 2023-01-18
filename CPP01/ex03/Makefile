# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 10:54:37 by clora-ro          #+#    #+#              #
#    Updated: 2023/01/18 11:00:20 by clora-ro         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC					= c++

CC_FLAGS			= -Wall -Wextra -Werror -std=c++98

NAME				= Violence_inutile

OBJS_DIR			= srcs/objs

INC_DIR				= includes/

SRCS_DIR			= srcs/

OBJECTS_PREFIXED	= $(addprefix $(OBJS_DIR)/, $(OBJS))

OBJS				= $(SRCS:.cpp=.o)

SRCS				=	main.cpp \
						Weapon.cpp \
						HumanA.cpp \
						HumanB.cpp

INC					=	$(INC_DIR)Weapon.hpp \
						$(INC_DIR)HumanA.hpp \
						$(INC_DIR)HumanB.hpp
							

all: $(NAME)

$(NAME): $(OBJECTS_PREFIXED)
	$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(CC_FLAGS)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)%.cpp Makefile $(INC) $(OBJS_DIR)
	$(CC) $(CC_FLAGS) -c $< -o $@ -I $(INC_DIR)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re