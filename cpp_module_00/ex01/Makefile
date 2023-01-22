NAME		=	phonebook

HEAD		=	${shell find ./inc -name "*.hpp"}
SRCS		=	${shell find ./src -name "*.cpp"}
OBJS		=	$(patsubst %.cpp,%.o,$(SRCS))

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM 			=	rm -rf

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[32m[$(NAME)] compiled.\033[0m"

%.o:		%.cpp ${HEAD}
			@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			@$(RM) $(OBJS)
			@echo "\033[32m[$(NAME)] removed object files.\033[0m"

fclean:		clean
			@$(RM) $(NAME)
			@echo "\033[32m[$(NAME)] removed executable files.\033[0m"

re:			fclean all
