#include "../includes/push_swap.h"

t_data  *ft_data_create(char **arg)
{
    t_data  *data;
    int     i;
    char    *str;

    data = malloc(sizeof(t_data));
    data->A = NULL;
    data->B = NULL;
    i = 0;
    while(arg[i])
    {
        str = arg[i];
        ft_stack_add_bot(&(data->A), ft_stack_create(atoi(str)));
        i++;
    }
    return (data);
}
