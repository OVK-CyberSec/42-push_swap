#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
    t_stack_node    *a;
    t_stack_node    *b;
    char            **args;

    a = NULL;
    b = NULL;
    if (argc == 1 || (argc == 2 && !argv[1][0]))
        return (1);
    else if (argc == 2)
        args = ft_split(argv[1], ' ');
    else
        args = argv + 1;
    init_stack_a(&a, args);
    if (!stack_sorted(a))
    {
        if (stack_len(a) == 2)
            sa(&a, false);
        else if (stack_len(a) == 3)
            sort_three(&a);
        else
            sort_stacks(&a, &b);
    }
    free_stack(&a);
    if (argc == 2)
        free_split(args);

    return (0);
}
