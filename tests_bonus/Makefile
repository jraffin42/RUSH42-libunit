# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 14:25:17 by jraffin           #+#    #+#              #
#    Updated: 2022/01/12 15:21:26 by jraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL				=	/bin/sh

LIBNAME				:=	libft_strlcpy.a

TESTNAME			:=	$(addsuffix .test,$(LIBNAME))

LIBUNIT				:=	../framework/libunit.a

INCLUDEDIRS			:=	.

SRCDIR				:=	.

OBJDIR				:=	./obj

SRCFILES			:=	ft_my_strlcpy.c		\
						ft_putnbr.c			\
						ft_sqrt.c

TESTFILES			:=	$(wildcard */[0-9][0-9]_*.c)

CC					:=	cc
AR					:=	ar
ARFLAGS				:=	crs
RM					:=	rm

CCFLAGS				:=	-Wall -Wextra -Werror -pthread

DEBUGNAME			:= $(addsuffix .debug,$(LIBNAME))
DEBUGDIR			:= $(addsuffix .debug,$(OBJDIR))

ifndef DEBUG
	NAME			:=	$(LIBNAME)
	OUTDIR			:=	$(OBJDIR)
else
	CCFLAGS 		+=	-g
	NAME			:=	$(DEBUGNAME)
	OUTDIR			:=	$(DEBUGDIR)
endif

$(OUTDIR)/%.o		:	$(SRCDIR)/%.c | $(OUTDIR)
	@mkdir -p $(dir $@)
	$(CC) -c $(CCFLAGS) $(addprefix -I ,$(INCLUDEDIRS)) $(addprefix -I ,$(dir $(LIBUNIT))) $< -o $@

$(NAME)				:	$(addprefix $(OUTDIR)/,$(SRCFILES:.c=.o))
	$(AR) $(ARFLAGS) $(NAME) $(addprefix $(OUTDIR)/,$(SRCFILES:.c=.o))

all					:	$(NAME)
	@echo $(OUTDIR)/%.o $(SRCDIR)/%.c

$(TESTNAME)			:	$(LIBUNIT) main.c $(addprefix $(OUTDIR)/,$(SRCFILES:.c=.o)) $(addprefix $(OUTDIR)/,$(TESTFILES:.c=.o))
	$(CC) $(CCFLAGS) -o $(TESTNAME) $(addprefix $(OUTDIR)/,$(SRCFILES:.c=.o)) $(addprefix $(OUTDIR)/,$(TESTFILES:.c=.o)) $(addprefix -I ,$(wildcard */)) main.c $(LIBUNIT)

test				:	$(TESTNAME)
	@./$(TESTNAME) || true

$(OUTDIR)			:
	mkdir $(OUTDIR)

$(LIBUNIT)			:
	$(MAKE)	-C	$(dir $(LIBUNIT)) bonus

clean				:
	$(RM) -rf $(OBJDIR) $(DEBUGDIR)
	$(MAKE)	-C	$(dir $(LIBUNIT)) clean

fclean				:	clean
	$(RM) -f $(NAME) $(LIBNAME) $(DEBUGNAME) $(TESTNAME)
	$(MAKE)	-C	$(dir $(LIBUNIT)) fclean

re					:	fclean $(NAME)

.PHONY				:	all bonus test debug clean fclean re
