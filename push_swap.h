/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:01:21 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/11 11:47:15 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				number;
	int				index;
	struct s_list	*next;
}					t_list;
void				ra(t_list **a);
void				rra(t_list **a);
void				rrr(t_list **a, t_list **b);
void				rrb(t_list **a);
void				ss(t_list **a, t_list **b);
void				sb(t_list **b);
void				sa(t_list **a);
void				pb(t_list **a, t_list **b);
void				pa(t_list **a, t_list **b);
void				rb(t_list **a);
void				rr(t_list **a, t_list **b);

void				radix_sort(t_list **a, t_list **b);
void				helper(char **numbers, int *array, t_list *a, int i);
void				pb(t_list **a, t_list **b);
void				index_stack(t_list *a);
char				*ft_strjoin(char *s1, char *s2);
int					is_dup(t_list *a, long n);
int					is_sorted(int *array, int ac);
char				*ft_strdup(const char *s);
int					is_digit(char *s);
t_list				*parssing(int ac, char **av);
void				free_split(char **split);
void				exit_error_leak(int *array, t_list *stack, char **numbers);
void				exit_error(void);
long				ft_atol(const char *str);
long				ft_atol_leak(const char *str, int *array, t_list *a,
						char **numbers);
int					ft_strlen(char *s);
void				free_stack(t_list **a);
char				**ft_split(char *s, char c);
size_t				count_words(char const *s, char c);
int					is_valide(char *s);
int					all_is_okey(int ac, char **av);
int					arr_len(char **av);
char				**arrgs_union(int ac, char **av);
void				ft_lstadd_front(t_list **lst, int value);
int					*push_array(char **numbers, int ac, t_list *a);
char				*ft_strdup(const char *s);
#endif
