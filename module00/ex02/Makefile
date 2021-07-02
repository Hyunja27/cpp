NAME = account
CC = clang++
CFLAGS = -Wall -Wextra -Werror #-std=c++98
#CFLAGS = -g3 -fsanitize=address
SRCS_DIR = ./srcs
OBJS_DIR = ./objs
INC_DIR = ./includes
SRCS =	./srcs/Account.class.cpp	\
		./srcs/tests.cpp
OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.cpp=.o)))
vpath %.cpp $(SRCS_DIR)
RM = rm -f
all: $(NAME)
$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^
$(OBJS_DIR) :
	@mkdir -p $(OBJS_DIR)
$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	$(CC) $(CFLAGS) -o $@ -I$(INC_DIR) -c $^
clean :
	@$(RM) -r $(OBJS_DIR)
fclean : clean
	@$(RM) $(NAME)
re : fclean all