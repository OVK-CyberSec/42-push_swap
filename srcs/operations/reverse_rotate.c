/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:03:23 by mohifdi           #+#    #+#             */
/*   Updated: 2025/09/04 18:16:40 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*last;
	int				len;

	len = stack_len(*stack);
	if (NULL == *stack || NULL == stack || 1 == len)
		return ;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rev_rotate_both(t_stack_node **a,
			t_stack_node **b, t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
		rrr(a, b, false);
	current_index(*a);
	current_index(*b);
}

void	rra(t_stack_node **a, bool print)
{
	reverse_rotate(a);
	if (!print)
		write(1, "rra\n", 4);
}

void	rrb(t_stack_node **b, bool print)
{
	reverse_rotate(b);
	if (!print)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack_node **a, t_stack_node **b, bool print)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (!print)
		write(1, "rrr\n", 4);
}
