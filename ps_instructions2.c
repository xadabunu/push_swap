/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_instructions2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <xadabunu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 01:39:02 by xadabunu          #+#    #+#             */
/*   Updated: 2023/01/21 01:39:04 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_first(int *a, int i)
{
	//décale tout => remalloc (non)
}

int	get_first()
{

}

size_t	size(int *a)
{
	size_t	ctr;

	ctr = 0;
	while (*a)
	{
		a++;
		ctr++;
	}
	return (ctr);
}

// size_t	size(t_stack *a)
// {
// 	size_t	ctr;

// 	ctr = 0;
// 	while (a != NULL)
// 	{
// 		ctr++;
// 		a = a->next;
// 	}
// 	return (ctr);
// }