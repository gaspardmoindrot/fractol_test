NAME = libft.a

SRCS = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strcpy.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strsplit.c \
	   ft_itoa.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putendl.c \
	   ft_putnbr.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_abs.c \
	   get_next_line.c \
	   ft_conversion_b.c \
	   ft_conversion_c.c \
	   ft_conversion_d.c \
	   ft_conversion_e.c \
	   ft_conversion_f.c \
	   ft_conversion_o.c \
	   ft_conversion_p.c \
	   ft_conversion_pourc.c \
	   ft_conversion_s.c \
	   ft_conversion_u.c \
	   ft_conversion_x.c \
	   ft_conversion_x_maj.c \
	   ft_itoa_base_long.c \
	   ft_printf.c \
	   ft_end.c \
	   ft_classe.c \
	   ft_color.c

INCLUDES = libft.h

OBJECTS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc $(FLAGS) $(SRCS) $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o  libft.h.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
