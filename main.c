/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:26:06 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/10 10:27:24 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdio.h>
int main(int ac , char *av[])
{
    t_list *a;
    t_list *tmp;
    
    if (ac == 1)
        exit(0);
    a = parssing(ac, av);
    index_stack(a);
    while(a)
    {
        printf("\n %d ==== %d", a->number, a->index);
        tmp = a->next;
        free(a);
        a = tmp;
        
    }
}
