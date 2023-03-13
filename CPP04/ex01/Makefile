CC					= c++

CC_FLAGS			= -Wall -Wextra -Werror -std=c++98

NAME				= BurnTheWorld

OBJS_DIR			= srcs/objs

INC_DIR				= includes/

SRCS_DIR			= srcs/

OBJECTS_PREFIXED	= $(addprefix $(OBJS_DIR)/, $(OBJS))

OBJS				= $(SRCS:.cpp=.o)

SRCS				=	Animal.cpp \
						Brain.cpp \
						Dog.cpp \
						Cat.cpp \
						WrongAnimal.cpp \
						WrongCat.cpp \
						main.cpp

INC					=	$(INC_DIR)Animal.hpp \
						$(INC_DIR)Brain.hpp \
						$(INC_DIR)Dog.hpp \
						$(INC_DIR)Cat.hpp \
						$(INC_DIR)WrongAnimal.hpp \
						$(INC_DIR)WrongCat.hpp
							

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