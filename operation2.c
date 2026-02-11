/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:30:21 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/10 21:15:14 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void pb(t_list **a, t_list **b)
{
    t_list *tmp;
    t_list *tmp2;
    
    tmp = *a;
    tmp2 = tmp->next;
    tmp ->next = NULL;
    if (!*b)
        *b = tmp;
    else
    {
        tmp->next = *b;
        *b = tmp;
    }
    *a = tmp2;
    write(1,"pb\n", 3);
}
void pa(t_list **a, t_list **b)
{
    t_list *tmp;
    t_list *tmp2;
    

    tmp = *a;
    tmp2 = tmp->next;
    tmp ->next = NULL;
    if (!*b)
    {
        *b = tmp;
    }
    else
    {
        tmp->next = *b;
        *b = tmp;
    }
    *a = tmp2;
    write(1, "pa\n", 3);
}

void ra(t_list **a)
{
    t_list *tmp;
    t_list *tmp2;
    t_list *t;
    
    tmp2 = (*a)->next;
    tmp = *a;
    t = *a;
    while (tmp->next)
	    tmp = tmp -> next;
    t->next = NULL;
    tmp->next = t;
   *a = tmp2;
    write(1,"ra\n", 3);
}

void rb(t_list **a)
{
    t_list *tmp;
    t_list *tmp2;
    t_list *t;
    
    tmp2 = (*a)->next;
    tmp = *a;
    t = *a;
    while (tmp->next)
	    tmp = tmp -> next;
    t->next = NULL;
    tmp->next = t;
   *a = tmp2;
   write(1,"rb\n",3);
}

