/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:01:47 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/13 12:39:29 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol_leak(const char *str, int *array, t_list *a, char **numbers)
{
	size_t	i;
	long	sign;
	long	n;

	n = 0;
	sign = 1;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		if ((sign == 1 && n > INT_MAX) || (sign == -1 && -1 * n < INT_MIN))
			exit_error_leak(array, a, numbers);
		i++;
	}
	return (n * sign);
}

int	get_position(t_list *a, int i)
{
	int	pos;

	pos = 0;
	while (a)
	{
		if (a->index == i)
			return (pos);
		a = a->next;
		pos++;
	}
	return (-1);
}

void	move_index_to_top(t_list **a, int i)
{
	int	pos;
	int	size;

	if (!a || !*a)
		exit_error();
	pos = get_position(*a, i);
	size = ft_lstsize(*a);
	if (pos == -1)
		return ;
	if (pos <= size / 2)
	{
		while ((*a)->index != i)
			ra(a);
	}
	else
	{
		while ((*a)->index != i)
			rra(a);
	}
}
