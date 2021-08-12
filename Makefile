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
		srcs/find_highest.c \
		srcs/find_lowest.c \
		srcs/pos_from_nbr.c \
		srcs/ft_math.c \
		srcs/smart_rotate.c \
		srcs/ft_reorganize.c \
		srcs/sort_small.c \
		srcs/find_closest.c \
		srcs/alt_sort.c \
		srcs/alt_sort_aux.c \

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

sanitize : fclean $(OBJS)
	$(MAKE) -C ./libft
	$(CC) $(FLAGS) -fsanitize=address libft/libft.a $(INCLUDES) $(SRCS) -o push_swap

re : fclean all
