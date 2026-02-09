/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:26:06 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/09 12:55:26 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdio.h>
int main(int ac , char *av[])
{
    t_list *a;
    t_list *tmp;//TODO check the numbers of args
                //TODO check overflow
    
    if (ac == 1)
        exit(0);
    a = parssing(ac, av);
    
    while(a)
    {  
        printf("\n %d", a->number);
        tmp = a->next;
        free(a);
        a = tmp;
        
    }
}
