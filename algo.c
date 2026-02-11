/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:50:32 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/11 14:01:28 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	i = 0;
	if (!lst)
		return (0);
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
void radix_sort(t_list **a, t_list **b)
{
    int i;
    int j;
    int size;
    int max_bits;

    size = ft_lstsize(*a);
    max_bits = 0;
    while (((size - 1) >> max_bits) != 0)
        max_bits++;

    j = 0;
    while (j < max_bits)
    {
        i = 0;
        while (i < size)
        {
            if (((*a)->index >> j) & 1)
                ra(a);
            else
                pb(a, b);
            i++;
        }
        while (*b)
            pa(a, b);
        j++;
    }
}

