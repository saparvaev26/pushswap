#include "../includes/push_swap.h"

void ft_reverse_rotate(t_stack **s)
{
    intmax_t    num;

    if(*s && (*s)->next)
    {
        num = (*s)->num;
        ft_stack_del_top(&(*s));
        ft_stack_add_bot(&(*s), ft_stack_create(num));
    }
}

void    rra(t_data *data)
{
    ft_reverse_rotate(&data->A);
    write(1, "rra\n", 4);
}

void    rrb(t_data *data)
{
    ft_reverse_rotate(&data->A);
    write(1, "rrb\n", 4);
}

void    rrr(t_data *data)
{
    ft_reverse_rotate(&data->A);
    ft_reverse_rotate(&data->B);
    write(1, "rrr\n", 4);
}