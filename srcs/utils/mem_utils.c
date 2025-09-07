#include "../../includes/push_swap.h"

void clean_and_exit(t_stack_node **a, t_stack_node **b, char **args, int code)
{
    if (a)
        free_stack(a);
    if (b)
        free_stack(b);
    if (args)
        free_split(args);
    exit(code);
}