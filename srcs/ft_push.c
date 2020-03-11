#include "../includes/push_swap.h"

void    ft_push(t_stack **rest, t_stack **dest)
{
    int num;

    if(*rest)
    {
        num = (*rest)->num;
        ft_stack_del_top(&(*rest));
        ft_stack_add_top(&(*dest), ft_stack_create(num));
    }
}

void    pa(t_data *data)
{
    ft_push(&data->B, &data->A);
    write(1, "pa\n", 3);
}

void    pb(t_data *data)
{
    ft_push(&data->A, &data->B);
    write(1, "pb\n", 3);
}