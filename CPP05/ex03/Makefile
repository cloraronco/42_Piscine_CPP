CC					= c++

CC_FLAGS			= -Wall -Wextra -Werror -std=c++98

NAME				= Intern

OBJS_DIR			= srcs/objs

INC_DIR				= includes/

SRCS_DIR			= srcs/

OBJECTS_PREFIXED	= $(addprefix $(OBJS_DIR)/, $(OBJS))

OBJS				= $(SRCS:.cpp=.o)

SRCS				=	main.cpp \
						Bureaucrat.cpp \
						Form.cpp \
						Intern.cpp \
						PresidentialPardonForm.cpp \
						RobotomyRequestForm.cpp \
						ShrubberyCreationForm.cpp

INC					=	$(INC_DIR)Bureaucrat.hpp \
						$(INC_DIR)Form.hpp \
						$(INC_DIR)Intern.hpp \
						$(INC_DIR)PresidentialPardonForm.hpp \
						$(INC_DIR)RobotomyRequestForm.hpp \
						$(INC_DIR)ShrubberyCreationForm.hpp

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
	@find . -name "*_shrubbery" -type f -delete

re: fclean all

.PHONY: all clean fclean re