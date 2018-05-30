# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojerroud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/26 16:57:41 by ojerroud          #+#    #+#              #
#    Updated: 2017/11/08 14:16:20 by ojerroud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = rtv1
INC_PATH = include
MINI_PATH = minilibx
vpath %.c src
vpath_h = -I $(INC_PATH) -I $(MINI_PATH) -I libft/$(INC_PATH)
LIB = -L libft/ -lft -L $(MINI_PATH) -lmlx

MINIFLAGS = -framework OpenGL -framework AppKit

OBJDIR := obj
OBJS := $(addprefix $(OBJDIR)/,main.o)

$(OBJDIR)/%.o : %.c
	@$(CC) $(CPPFLAGS) $(CFLAGS) $(vpath_h) -Wall -Wextra -Werror -c \
	$(OUTPUT_OPTION) $<

all : $(OBJS)
	@make -C libft/
	@make -C $(MINI_PATH)
	@$(CC) $(LIB) -o $(NAME) $(OBJS) $(MINIFLAGS)

recomp : $(OGJS)
	@$(CC) $(LIB) -o $(NAME) $(OBJS) $(MINIFLAGS)

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	@mkdir $(OBJDIR)

clean :
	@make clean -C libft
	@/bin/rm -rf $(OBJDIR)
	@echo "clean.."

fclean : clean
	@make fclean -C libft
	@/bin/rm -f $(NAME)

re: fclean all