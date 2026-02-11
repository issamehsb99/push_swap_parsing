/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:01:47 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/11 15:45:11 by ihasbi           ###   ########.fr       */
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
