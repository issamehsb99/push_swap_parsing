/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:53:36 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/12 14:59:28 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**init_numbers(int ac, char **av)
{
	if (!all_is_okey(ac, av))
		exit_error();
	return (arrgs_union(ac, av));
}

static int	*handle_sorted(char **numbers, int len)
{
	int	*array;

	array = push_array(numbers, len, NULL);
	if (is_sorted(array, len))
	{
		free_split(numbers);
		free(array);
		exit(0);
	}
	return (array);
}

static t_list	*fill_stack(char **numbers, int *array, int len)
{
	t_list	*a;
	long	value;

	a = NULL;
	while (--len >= 0)
	{
		value = ft_atol_leak(numbers[len], array, a, numbers);
		if (is_dup(a, value))
		{
			free(array);
			free_stack(&a);
			free_split(numbers);
			exit_error();
		}
		ft_lstadd_front(&a, value, numbers, array);
	}
	return (a);
}

t_list	*parssing(int ac, char **av)
{
	char	**numbers;
	int		*array;
	int		len;
	t_list	*a;

	numbers = init_numbers(ac, av);
	len = arr_len(numbers);
	array = handle_sorted(numbers, len);
	a = fill_stack(numbers, array, len);
	free_split(numbers);
	free(array);
	return (a);
}
