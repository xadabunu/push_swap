/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:46:32 by xadabunu          #+#    #+#             */
/*   Updated: 2023/01/25 14:46:35 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	s(t_list *a)
{
	int	second;

	if (ft_lstsize(a) > 1)
	{
		second = a->value;
		a->value = a->next->value;
		a->next->value = second;
	}
}

void	sa(t_list *a)
{
	s(a);
	write(1, "sa\n", 3);
}

void	sb(t_list *b)
{
	s(b);
	write(1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	s(a);
	s(b);
	write(1, "ss\n", 3);
}