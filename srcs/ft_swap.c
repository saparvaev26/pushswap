#include "../includes/push_swap.h"

void    ft_swap(t_stack  **s)
{
    t_stack *tmp;

    if (*s && (*s)->next)
    {
        tmp = (*s)->next;
        if(tmp->next)
            tmp->next->prev = *s;
        (*s)->prev = tmp;
        (*s)->next = tmp->next;
        tmp->prev = NULL;
        tmp->next = *s;
        *s = tmp;
    }
}

void    sa(t_data *data)
{
    ft_swap(&(data->A));
    write(1, "sa\n", 3);
}

void    sb(t_data *data)
{
    ft_swap(&(data->B));
    write(1, "sb\n", 3);
}

void    ss(t_data *data)
{
    ft_swap(&(data->A));
    ft_swap(&(data->B));
    write(1, "ss\n", 3);
}

