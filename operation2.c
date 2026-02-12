/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:30:21 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/12 13:26:26 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **b, t_list **a)
{
	t_list	*tmp;

	if (!b || !*b)
		return ;
	tmp = *b;
	*b = tmp->next;
	tmp->next = *a;
	*a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!a || !*a)
		return ;
	tmp = *a;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}

void	ra(t_list **a)
{
	t_list	*first;
	t_list	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	*a = first->next;
	first->next = NULL;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = first;
	write(1, "ra\n", 3);
}

void	rb(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*t;

	tmp2 = (*a)->next;
	tmp = *a;
	t = *a;
	while (tmp->next)
		tmp = tmp->next;
	t->next = NULL;
	tmp->next = t;
	*a = tmp2;
	write(1, "rb\n", 3);
}
