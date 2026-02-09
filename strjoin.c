/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:00:51 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/08 17:03:34 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	new = malloc (sizeof(char) * (ft_strlen((char *)s2)
				+ ft_strlen((char *)s1) + 1));
	if (!new)
		return ( NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (free(s1),new);
}

char	*ft_strdup(const char *s)
{
	char	*nov;
	size_t	i;
	char	*s1;

	s1 = (char *)s;
	nov = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!nov)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		nov[i] = s[i];
		i++;
	}
	nov[i] = '\0';
	return (nov);
}
void	ft_lstadd_front(t_list **lst, int value)
{
	t_list *new;

	new = malloc(sizeof(t_list));

	if (!new)
		return ;
	new->next = *lst;
	new->number = value;
	*lst = new;
}
