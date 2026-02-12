/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:26:06 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/12 16:29:32 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	*a;
	t_list	*b;

	if (ac == 1)
		return (0);
	a = parssing(ac, av);
	b = NULL;
	index_stack(a);
	handl_it(&a, &b, ft_lstsize(a));
	radix_sort(&a, &b);
	return (free_stack(&a), 0);
}
