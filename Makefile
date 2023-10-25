NAME = libft.a
BONUS_NAME = .bonus

SRC = ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c ft_atoi.c ft_toupper.c \
		ft_tolower.c ft_itoa.c ft_split.c ft_strchr.c ft_strrchr.c ft_strtrim.c \
		ft_strnstr.c ft_strncmp.c  ft_strjoin.c ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_bzero.c ft_memset.c \
		ft_memchr.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_substr.c ft_strdup.c ft_calloc.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c

OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(BONUS_SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

.c.o:
	$(CC) $(CFLAG) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)
	ar rcs $(BONUS_NAME) $(OBJS) $(OBJS_BONUS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re bonus