NAME = pathfinder

CFLG = -std=c11 -Wall -Wextra -Werror -Wpedantic -g
COMP = clang

SRCD = src
INCD	=	inc
OBJD	=	obj
LMXD	=	libmx

LMXA:=	$(LMXD)/libmx.a
LMXI:=	$(LMXD)/inc

INC = pathfinder.h
INCS = $(addprefix $(INCD)/, $(INC))

SRC = mx_validation.c

SRCS	=	$(addprefix $(SRCD)/, $(SRC))
OBJS	=	$(addprefix $(OBJD)/, $(SRC:%.c=%.o))

all: install

install: $(LMXA) $(NAME)

$(NAME): $(OBJS)
	@$(COMP) $(CFLG) $(OBJS) -L$(LMXD) -lmx -o $@

$(OBJD)/%.o: $(SRCD)/%.c $(INCS)
	@$(COMP) $(CFLG) -c $< -o $@ -I$(INCD) -I$(LMXI)

$(OBJS): | $(OBJD)

$(OBJD):
	@mkdir -p $@

$(LMXA):
	@make -sC $(LMXD)
clean:
	@make -sC $(LMXD) $@
	@rm -rf $(OBJD)

uninstall: clean
	@make -sC $(LMXD) $@
	@rm -rf $(NAME)

reinstall: uninstall install