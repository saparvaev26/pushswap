#ifndef PUSHSWAP_PUSH_SWAP_H
# define PUSHSWAP_PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
    struct s_stack *next;
    struct s_stack *prev;
    intmax_t        num;
}               t_stack;

typedef struct  s_data
{
    t_stack *A;
    t_stack *B;
}               t_data;

//Stack functions
t_stack *ft_stack_get(t_stack *s, int n);
t_stack *ft_stack_create(int num);
void    ft_stack_add_top(t_stack **s, t_stack *elem);
void    ft_stack_add_bot(t_stack **s, t_stack *elem);
void    ft_stack_del_top(t_stack **s);
void    ft_stack_del_bot(t_stack **s);

//Data functions
t_data  *ft_data_create(char **arg);

//Swap functions
void    sa(t_data *data);
void    sb(t_data *data);
void    ss(t_data *data);

//Push functions
void    pa(t_data *data);
void    pb(t_data *data);


#endif //PUSHSWAP_PUSH_SWAP_H
