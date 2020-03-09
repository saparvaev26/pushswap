#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

# include <stdlib.h>

typedef struct  s_stack
{
    intmax_t        num;
    struct s_stack  *next;
    struct s_stack  *prev;
}               t_stack;

#endif

