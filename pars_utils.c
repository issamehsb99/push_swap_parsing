/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:35:17 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/11 15:41:29 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	all_is_okey(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (!is_valide(av[i]))
			return (0);
		i++;
	}
	return (1);
}

int	arr_len(char **av)
{
	int	j;

	j = 0;
	while (av[j])
	{
		j++;
	}
	return (j);
}

char	**arrgs_union(int ac, char **av)
{
	int		i;
	char	*new;

	new = ft_strdup("");
	i = 1;
	while (i < ac)
	{
		new = ft_strjoin(new, av[i]);
		new = ft_strjoin(new, " ");
		i++;
	}
	return (ft_split(new, ' '));
}
