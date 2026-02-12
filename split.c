/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:23:32 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/12 10:10:02 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_all(int k, char **s)
{
	while (k > 0)
	{
		k--;
		free(s[k]);
	}
	free(s);
}

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static void	fil_tab(char *nev, const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		nev[i] = s[i];
		i++;
	}
	nev[i] = '\0';
}

static int	set_mem(char **tab, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j > 0)
		{
			tab[k] = malloc(j + 1);
			if (!tab[k])
				return (free_all(k, tab), 0);
			fil_tab(tab[k], (s + i), c);
			k++;
			i = i + j;
		}
		else
			i++;
	}
	tab[k] = 0;
	return (1);
}

char	**ft_split(char *s, char c)
{
	size_t	num_ofw;
	char	**tab;

	if (!s)
		return (NULL);
	num_ofw = count_words(s, c);
	tab = malloc(sizeof(char *) * (num_ofw + 1));
	if (!tab)
		exit_error_free(s);
	if (!set_mem(tab, s, c))
		exit_error_free(s);
	free(s);
	return (tab);
}
