/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:53:23 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/11 15:40:08 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	t_list	*first;
	t_list	*second;

	first = *a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	t_list	*first;
	t_list	*second;

	first = *b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	write(1, "sb\n", 3);
}

static void	sa_for_ss(t_list **a)
{
	t_list	*first;
	t_list	*second;

	first = *a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*a = second;
}

static void	sb_for_ss(t_list **b)
{
	t_list	*first;
	t_list	*second;

	first = *b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*a = second;
}

void	ss(t_list **a, t_list **b)
{
	sa_for_ss(a);
	sb_for_ss(b);
	write(1, "ss\n", 3);
}
