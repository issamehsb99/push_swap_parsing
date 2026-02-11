/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:29:08 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/08 19:46:21 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	is_digit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '-' || s[i] == '+')
			i++;
		else if (s[i] <= '9' && s[i] >= '0')
			i++;
		else
			return (0);
	}
	return (1);
}
void	exit_error_leak(int *array, t_list *stack, char **numbers)
{
	free(array);
	if (stack)
		free_stack(&stack);
	if (numbers)
		free_split(numbers);
	write(2, "Error\n", 6);
	exit(1);
}
