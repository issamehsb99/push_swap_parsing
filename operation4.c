/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 21:11:21 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/10 21:20:15 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static void ra_for_rr(t_list **a)
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
}

static void rb_for_rr(t_list **a)
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
}
void rr(t_list **a, t_list **b)
{
    ra_for_rr(a );
    rb_for_rr(b);
    write(1,"rr\n", 3);
}


















void rr(t_list **a, t_list **b);