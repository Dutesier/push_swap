NAME = push_swap

SRCS =  main.c \
		srcs/stackInit.c \
		srcs/populate_a.c \
		srcs/swap_a.c \
		srcs/swap_b.c \
		srcs/push_a.c \
		srcs/push_b.c \
		srcs/rotate_a.c \
		srcs/rotate_b.c \
		srcs/rev_rotate_a.c \
		srcs/rev_rotate_b.c \
		srcs/same_time.c \
		srcs/error_checker.c \
		srcs/is_sorted.c \
		srcs/sorting.c \
		srcs/ft_sort_i.c \
		srcs/ft_sort_d.c \
		srcs/find_highest.c \
		srcs/find_lowest.c \
		srcs/push_half.c \

CC = gcc

FLAGS = -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	$(CC) libft/libft.a $(INCLUDES) $(SRCS) -o push_swap

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft 
	rm -rf $(OBJS) *.o

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
