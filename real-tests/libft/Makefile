# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 14:25:17 by jraffin           #+#    #+#              #
#    Updated: 2022/01/10 00:28:19 by jraffin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL				=	/bin/sh

NAME				:=	libft.a

TESTNAME			:=	$(addsuffix .test,$(NAME))

LIBUNIT				:=	../../framework/libunit.a

INCLUDEDIRS			:=	.

SRCDIR				:=	.

OUTDIR				:=	./obj/obj

SRCFILES			:=	ft_isalpha.c\
						ft_isdigit.c\
						ft_isalnum.c\
						ft_isascii.c\
						ft_isprint.c\
						ft_strlen.c\
						ft_memset.c\
						ft_bzero.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_toupper.c\
						ft_tolower.c\
						ft_strchr.c\
						ft_strrchr.c\
						ft_strncmp.c\
						ft_itoa.c\
						ft_memchr.c\
						ft_memcmp.c\
						ft_strtrim.c\
						ft_strnstr.c\
						ft_atoi.c\
						ft_calloc.c\
						ft_strdup.c\
						ft_substr.c\
						ft_strlcpy.c\
						ft_strjoin.c\
						ft_split.c\
						ft_strmapi.c\
						ft_striteri.c\

TESTFILES			:=	$(wildcard ../*/[0-9][0-9]_*.c)	\
						../main.c

CC					:=	cc
AR					:=	ar
ARFLAGS				:=	crs
RM					:=	rm

CCFLAGS				:=	-Wall -Wextra -Werror

$(OUTDIR)/%.o		:	$(SRCDIR)/%.c | $(OUTDIR)
	@mkdir -p $(dir $@)
	$(CC) -c $(CCFLAGS) $(addprefix -I ,$(INCLUDEDIRS)) $(addprefix -I ,$(dir $(LIBUNIT))) $< -o $@

$(NAME)				:	$(addprefix $(OUTDIR)/,$(SRCFILES:.c=.o))
	$(AR) $(ARFLAGS) $(NAME) $(addprefix $(OUTDIR)/,$(SRCFILES:.c=.o))

all					:	$(NAME)
	@echo $(OUTDIR)/%.o $(SRCDIR)/%.c

$(TESTNAME)			:	$(LIBUNIT) $(addprefix $(OUTDIR)/,$(SRCFILES:.c=.o)) $(addprefix $(OUTDIR)/,$(TESTFILES:.c=.o))
	$(CC) $(CCFLAGS) -o $(TESTNAME) $(addprefix $(OUTDIR)/,$(SRCFILES:.c=.o)) $(addprefix $(OUTDIR)/,$(TESTFILES:.c=.o)) $(addprefix -I ,..) $(addprefix -I ,$(wildcard ../*/)) $(LIBUNIT)

test				:	$(TESTNAME)
	@./$(TESTNAME) || true

$(OUTDIR)			:
	mkdir -p $(OUTDIR)

$(LIBUNIT)			:
	$(MAKE)	-C	$(dir $(LIBUNIT))

clean				:
	$(RM) -rf ./obj
	$(MAKE)	-C	$(dir $(LIBUNIT)) clean

fclean				:	clean
	$(RM) -f $(NAME) $(TESTNAME) $(LIBUNIT)

re					:	fclean $(NAME)

.PHONY				:	all test clean fclean re
