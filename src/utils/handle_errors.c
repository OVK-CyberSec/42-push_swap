#include "../../includes/push_swap.h"

int valid_entries(char *num)
{
    if (*num == '+' || *num == '-')
        num++;
    if (*num == '\0')
        return (0);
    while (*num)
	{
		if (*num < '0' || *num > '9')
			return (0);
		num++;
	}
    return (1);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*current;

	if (stack == NULL)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

