#include "includes/push_swap.h"
#include <stdio.h>

void    print_stack(t_stack *s)
{
    while(s)
    {
        printf("%jd ", s->num);
        s = s->next;
    }
}

int main()
{
    t_data  *data;
    char *arg[] = { "7", "2", "3", NULL};

    data = ft_data_create(arg);
    sa(data);
    pb(data);
    pb(data);
    pb(data);

    printf("A : ");
    print_stack(data->A);
    printf("\nB : ");
    print_stack(data->B);
}