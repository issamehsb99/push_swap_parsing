/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:53:36 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/09 18:44:48 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *parssing(int ac , char **av)
{
    int i;
    t_list *a;
    int    *array;

    a = NULL;
    if (!all_is_okey(ac, av))
        exit_error();
    char **numbers;
    numbers = arrgs_union(ac, av);
    i = arr_len(numbers);
    array = push_array(numbers, i, a);
    if (is_sorted(array, i) == 1)
    {
        free_split(numbers);
        free(array);
        exit(0);
    }
 
    i = i -1 ;
    while (i >= 0)
    {
        if(is_dup(a,ft_atol_leak(numbers[i], array, a, numbers)) == 1)
        {
            free(array);
            free_stack(&a);
            free_split(numbers);
            exit_error();
        }
        ft_lstadd_front(&a, ft_atol_leak(numbers[i], array, a, numbers));
        i--;
    }
    free(array);
    free_split(numbers);
    return(a);
}
