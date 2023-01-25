/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:50:20 by xadabunu          #+#    #+#             */
/*   Updated: 2023/01/25 14:50:21 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	r(t_list **a)
{
	t_list	*tmp;

	tmp = ft_lstlast(*a);
	tmp->next = *a;
	tmp = tmp->next;
	*a = (*a)->next;
	tmp->next = NULL;
}

void	ra(t_list **a)
{
	r(a);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	r(b);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	r(a);
	r(b);
	write(1, "rr\n", 3);
}

int	size(t_list *a)
{
	size_t	ctr;

	ctr = 0;
	while (a != NULL)
	{
		ctr++;
		a = a->next;
	}
	return (ctr);
}
