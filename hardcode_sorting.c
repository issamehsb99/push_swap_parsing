/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcode_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:08:53 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/13 12:41:18 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_list **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->number;
	b = ((*stack)->next)->number;
	c = (((*stack)->next)->next)->number;
	if (a > b && b < c)
	{
		if (a > c)
			ra(stack);
		else
			sa(stack);
	}
	else if (c < a && c < b)
	{
		if (a > b)
			sa(stack);
		rra(stack);
	}
	else if (a < b && a < c && b > c)
	{
		sa(stack);
		ra(stack);
	}
}

static void	sort_four(t_list **a, t_list **b)
{
	move_index_to_top(a, 0);
	pb(a, b);
	sort_three(a);
	pa(b, a);
}

static void	sort_five(t_list **a, t_list **b)
{
	move_index_to_top(a, 0);
	pb(a, b);
	move_index_to_top(a, 1);
	pb(a, b);
	sort_three(a);
	pa(b, a);
	pa(b, a);
}

void	handl_it(t_list **a, t_list **b, int i)
{
	if (i == 2)
	{
		sa(a);
		free_stack(a);
		exit(0);
	}
	if (i == 3)
	{
		sort_three(a);
		free_stack(a);
		exit(0);
	}
	if (i == 4)
	{
		sort_four(a, b);
		free_stack(a);
		exit(0);
	}
	if (i == 5)
	{
		sort_five(a, b);
		free_stack(a);
		exit(0);
	}
}
