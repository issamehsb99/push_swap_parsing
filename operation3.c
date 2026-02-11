/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihasbi <ihasbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 21:03:06 by ihasbi            #+#    #+#             */
/*   Updated: 2026/02/10 21:14:54 by ihasbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_list **a)
{
    t_list *tmp;
    t_list *tmp2;
    t_list *tmp3;

    tmp = *a;
    while((tmp->next)->next)
        tmp=tmp->next;
    tmp3 = tmp;
    tmp2 = tmp->next;
    tmp3->next = NULL;
    tmp2->next = *a;
    *a = tmp2;
    write(1, "rra\n", 4);
}

void rrb(t_list **a)
{
    t_list *tmp;
    t_list *tmp2;
    t_list *tmp3;

    tmp = *a;
    while((tmp->next)->next)
        tmp=tmp->next;
    tmp3 = tmp;
    tmp2 = tmp->next;
    tmp3->next = NULL;
    tmp2->next = *a;
    *a = tmp2;
    write(1, "rrb\n", 4);
}
static void rra_for_rrr(t_list **a)
{
    t_list *tmp;
    t_list *tmp2;
    t_list *tmp3;

    tmp = *a;
    while((tmp->next)->next)
        tmp=tmp->next;
    tmp3 = tmp;
    tmp2 = tmp->next;
    tmp3->next = NULL;
    tmp2->next = *a;
    *a = tmp2;
}

static void rrb_for_rrr(t_list **a)
{
    t_list *tmp;
    t_list *tmp2;
    t_list *tmp3;

    tmp = *a;
    while((tmp->next)->next)
        tmp=tmp->next;
    tmp3 = tmp;
    tmp2 = tmp->next;
    tmp3->next = NULL;
    tmp2->next = *a;
    *a = tmp2;
}
void rrr(t_list **a, t_list **b)
{
    rra_for_rrr(a);
    rrb_for_rrr(b);
    write(1, "rrr\n", 4);
}