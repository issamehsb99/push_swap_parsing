/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:48:06 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/09 12:50:01 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*push_array(char **numbers, int ac, t_list *a)
{
	int	i;
	int	*array;

	array = malloc(sizeof(int) * ac - 1);
	if (!array)
	{
		exit_error();
	}
	i = 0;
	while (i < ac)
	{
		array[i] = ft_atol_leak(numbers[i], array, a, numbers);
		i++;
	}
	return (array);
}
