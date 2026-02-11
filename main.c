/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:26:06 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/11 15:35:34 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char *av[])
{
	t_list	*a;
	t_list	*b;

	if (ac == 1)
		return (0);
	a = parssing(ac, av);
	b = NULL;
	index_stack(a);
	radix_sort(&a, &b);
	free_stack(&a);
	return (0);
}
