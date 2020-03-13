#include "../includes/push_swap.h"

void ft_rotate(t_stack **s)
{
    intmax_t    num;
    t_stack     *tmp;

    if(*s && (*s)->next)
    {
        tmp = *s;
        while(tmp->next)
            tmp = tmp->next;
        num = tmp->num;
        ft_stack_del_bot(&(*s));
        ft_stack_add_top(&(*s), ft_stack_create(num));
    }
}

void    ra(t_data *data)
{
    ft_rotate(&data->A);
    write(1, "ra\n", 3);
}

void    rb(t_data *data)
{
    ft_rotate(&data->A);
    write(1, "rb\n", 3);
}

void    rr(t_data *data)
{
    ft_rotate(&data->A);
    ft_rotate(&data->B);
    write(1, "rr\n", 3);
}