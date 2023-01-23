/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:32:53 by xadabunu          #+#    #+#             */
/*   Updated: 2023/01/20 20:32:57 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *a)
{
	t_list	*second;

	if (ft_lstsize(a) > 1)
	{
		second = a->next;
		a->next = second->next;
		a = second;
	}
	write(1, "sa\n", 3);
}

void	sb(t_list *b)
{
	t_list	*second;

	if (ft_lstsize(b) > 1)
	{
		second = b->next;
		b->next = second->next;
		b = second;
	}
	write(1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}

void	pa(t_list *a, t_list *b)
{
	if (ft_lstsize(b))
	{
		ft_lstadd_front(&a, b);
		b = b->next;
	}
	write(1, "pa\n", 3);
}

void	pb(t_list *a, t_list *b)
{
	if (ft_lstsize(a))
	{
		ft_lstadd_front(&b, a);
		a = a->next;
	}
	write(1, "pb\n", 3);
}
