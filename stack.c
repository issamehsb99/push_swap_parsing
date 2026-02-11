/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:07:53 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/10 11:46:53 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_indexing(t_list *a, int number)
{
	int	min;

	min = 0;
	while (a)
	{
		if (number > a->number)
			min++;
		a = a->next;
	}
	return (min);
}
void	index_stack(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp)
	{
		tmp->index = get_indexing(a, tmp->number);
		tmp = tmp->next;
	}
}
