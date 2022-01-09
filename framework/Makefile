# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 14:25:17 by jraffin           #+#    #+#              #
#    Updated: 2022/01/09 15:25:41 by jraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL				=	/bin/sh

LIBNAME				:=	libunit.a

INCLUDEDIRS			:=	.

SRCDIRS				:=	.

OBJDIR				:=	./obj

COMMONSRCS			:=	utils.c

NOBONUSSRCS			:=	libunit.c

BONUSSRCS			:=	libunit_bonus.c

CC					:=	cc
AR					:=	ar
ARFLAGS				:=	crs
RM					:=	rm

CCFLAGS				:=	-Wall -Wextra -Werror

#SANITIZE			:=	-fsanitize=thread
#SANITIZE			+=	-fsanitize=address
#SANITIZE			+=	-fsanitize=undefined
#SANITIZE			+=	-fsanitize=memory

ifndef DEBUG
	NAME			:=	$(LIBNAME)
	OUTDIR			:=	$(OBJDIR)
else
	CCFLAGS 		+=	-g
	NAME			:=	$(addsuffix .debug,$(NAME))
	OUTDIR			:=	$(addsuffix .debug,$(OBJDIR))
endif

$(OUTDIR)/%.o		:	$(SRCDIRS)/%.c | $(OUTDIR)
	$(CC) -c $(CCFLAGS) $(SANITIZE) $(addprefix -I ,$(INCLUDEDIRS)) $(addprefix -I ,$(dir $(LIBFT))) $(addprefix -I ,$(dir $(MLX))) $< -o $@

$(NAME)				:	$(addprefix $(OUTDIR)/,$(COMMONSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(NOBONUSSRCS:.c=.o))
	$(AR) $(ARFLAGS) $(SANITIZE) -o $(NAME) $(addprefix $(OUTDIR)/,$(COMMONSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(NOBONUSSRCS:.c=.o))

all					:	$(NAME)

bonus				:	$(addprefix $(OUTDIR)/,$(COMMONSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(BONUSSRCS:.c=.o))
	$(AR) $(ARFLAGS) $(SANITIZE) -o $(NAME) $(addprefix $(OUTDIR)/,$(COMMONSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(BONUSSRCS:.c=.o))

$(OUTDIR)			:
	mkdir $(OUTDIR)

clean				:
	$(RM) -rf $(OBJDIR) $(addsuffix .debug,$(OUTDIR))

fclean				:	clean
	$(RM) -f $(NAME) $(addsuffix .debug,$(NAME))

re					:	fclean $(NAME)

.PHONY				:	all bonus clean fclean re
