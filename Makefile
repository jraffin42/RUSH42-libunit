# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 14:25:17 by jraffin           #+#    #+#              #
#    Updated: 2022/01/09 13:35:33 by jraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL				=	/bin/sh

NAME				:=	libunit.a

INCLUDEDIRS			:=	./framework						\
						$(wildcard tests/*)				\
						$(wildcard real_tests/*)		\

SRCDIRS				:=	./

OBJDIR				:=	./obj
DEBUGDIR			:=	./debugobj

COMMONSRCS			:=	framework/utils.c

NOBONUSSRCS			:=	framework/libunit.c

BONUSSRCS			:=	framework/libunit_bonus.c

TESTFILES			:=	main.c							\
						$(wildcard tests/*/*.c)			\
						$(wildcard real_tests/*/*.c)	\

CC					:=	cc
AR					:=	ar
ARFLAGS				:=	crs
RM					:=	rm

CCFLAGS				:=	-Wall -Wextra -Werror

#SANITIZE			:=	-fsanitize=thread
#SANITIZE			+=	-fsanitize=address
#SANITIZE			+=	-fsanitize=undefined
#SANITIZE			+=	-fsanitize=memory

OUTDIR				:=	$(OBJDIR)

DEBUGNAME			:= $(addsuffix .debug,$(NAME))

ifdef DEBUG
	CCFLAGS 		+=	-g
	NAME			:=	$(DEBUGNAME)
	OUTDIR			:=	$(DEBUGDIR)
endif

$(OUTDIR)/%.o		:	$(SRCDIRS)/%.c | $(OUTDIR)
	echo $@
	@mkdir -p $(dir $@)
	$(CC) -c $(CCFLAGS) $(SANITIZE) $(addprefix -I ,$(INCLUDEDIRS)) $(addprefix -I ,$(dir $(LIBFT))) $(addprefix -I ,$(dir $(MLX))) $< -o $@

$(NAME)				:	$(addprefix $(OUTDIR)/,$(COMMONSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(NOBONUSSRCS:.c=.o))
	$(AR) $(ARFLAGS) $(SANITIZE) -o $(NAME) $(addprefix $(OUTDIR)/,$(COMMONSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(NOBONUSSRCS:.c=.o))

all					:	$(NAME)

bonus				:	$(addprefix $(OUTDIR)/,$(COMMONSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(BONUSSRCS:.c=.o))
	$(AR) $(ARFLAGS) $(SANITIZE) -o $(NAME) $(addprefix $(OUTDIR)/,$(COMMONSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(BONUSSRCS:.c=.o))

libunit_test		:	$(addprefix $(OUTDIR)/,$(TESTFILES:.c=.o)) $(NAME)
	$(CC) $(CCFLAGS) $(SANITIZE) -o libunit_test $(addprefix $(OUTDIR)/,$(TESTFILES:.c=.o)) $(NAME)

test				:	libunit_test
	./libunit_test || true

debug				:	$(addprefix $(OUTDIR)/,$(COMMONSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(NOBONUSSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(TESTFILES:.c=.o))
	$(CC) $(CCFLAGS) -g $(SANITIZE) -o libunit_test.debug $(addprefix $(OUTDIR)/,$(COMMONSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(NOBONUSSRCS:.c=.o)) $(addprefix $(OUTDIR)/,$(TESTFILES:.c=.o))

$(OUTDIR)			:
	mkdir $(OUTDIR)

clean				:
	$(RM) -rf $(OBJDIR) $(DEBUGDIR)

fclean				:	clean
	$(RM) -f $(NAME) $(DEBUGNAME) libunit_test

re					:	fclean $(NAME)

.PHONY				:	all bonus test debug clean fclean re
