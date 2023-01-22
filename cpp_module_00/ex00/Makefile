NAME		=	megaphone

SRCS		=	${shell find . -name "*.cpp"}
OBJS		=	$(patsubst %.cpp,%.o,$(SRCS))

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM 			=	rm -rf

.PHONY:		all clean fclean re test

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[32m[$(NAME)] compiled.\033[0m"

%.o:		%.cpp
			@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			@$(RM) $(OBJS)
			@echo "\033[32m[$(NAME)] removed object files.\033[0m"

fclean:		clean
			@$(RM) $(NAME)
			@echo "\033[32m[$(NAME)] removed executable files.\033[0m"

re:			fclean all

test:		all
			@echo "\033[33m===========TEST====================================="
			@echo "first line - expected, second - megaphone"
			@echo "--1-------------------------------------------------"
			@echo "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
			@./$(NAME) "shhhhh... I think the students are asleep..."
			@echo "--2-------------------------------------------------"
			@echo "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
			@./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
			@echo "--3-------------------------------------------------"
			@echo "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
			@./$(NAME)
			@echo "===========END======================================\033[0m"
