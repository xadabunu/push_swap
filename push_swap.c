/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:58:27 by xadabunu          #+#    #+#             */
/*   Updated: 2023/01/10 16:58:29 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ps_has(t_list* a, int n)
{
	while (a)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

static t_list  *valid_argv(int argc, char **argv)
{
    int		i;
	int		n;
    t_list	*a;
	t_list	*temp;

    i = 1;
    while (i < argc)
    {
		if (!ps_is_a_number(argv[i]))
			return (ps_free(a));	
		n = ps_atoi(argv[i]);
		if (ps_has(a, n))
			return (ps_free(a));
		temp = ft_lstnew(n);
		if (!temp)
			return (ps_free(a));
		ft_lstadd_back(&a, temp);
		++i;
    }
    return (a);
}

#include <stdio.h>

void push_swap(int argc, char **argv)
{
    t_list *a;
    //t_list *b;

	if (argc > 1)
	{
		a = valid_argv(argc, argv);
		if (!a)
		{
			write(2, "ERROR\n", 6);
			exit(2);
		}
		//sort(a, b);
		while (a)
		{
			printf("%d\n", a->value);
			a = a->next;
		}
	}
	ps_free(a);
	//ps_free(b);
}
