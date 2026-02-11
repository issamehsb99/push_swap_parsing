/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:26:31 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/09 12:51:23 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valide(char *s)
{
	int	i;

	i = 0;
	if (is_digit(s) == 0)
		return (0);
	while (s[i])
	{
		if (i == 0 && (s[i] == '+' || s[i] == '-'))
			if (s[i + 1] > '9' || s[i + 1] < '0')
				return (0);
		if (i > 0 && (s[i] == '+' || s[i] == '-'))
			if (s[i - 1] != ' ' || (s[i + 1] > '9' || s[i + 1] < '0'))
				return (0);
		i++;
	}
	if (i == 0)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

int	is_dup(t_list *a, long n)
{
	while (a)
	{
		if (a->number == n)
			return (1);
		a = a->next;
	}
	return (0);
}

int	is_sorted(int *array, int ac)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		if (array[i] < array[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}
