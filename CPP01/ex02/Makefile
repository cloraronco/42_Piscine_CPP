# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 13:57:32 by clora-ro          #+#    #+#              #
#    Updated: 2023/01/18 10:18:25 by clora-ro         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC					= c++

CC_FLAGS			= -Wall -Wextra -Werror -std=c++98

NAME				= This_is_Brain

OBJS_DIR			= objs

OBJECTS_PREFIXED	= $(addprefix $(OBJS_DIR)/, $(OBJS))

OBJS				= $(SRCS:.cpp=.o)

SRCS				= main.cpp
	
all: $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp Makefile | $(OBJS_DIR)
	$(CC) $(CC_FLAGS) -MMD -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(CC_FLAGS)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re