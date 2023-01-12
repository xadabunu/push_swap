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

static int	ps_has(int* a, int n, int size)
{
	while (size >= 0)
	{
		if (a[size] == n)
			return (1);
		--size;
	}
	return (0);
}

static int  *valid_argv(int argc, char **argv)
{
    int i;
    int *a;
	int	n;

    if (argc < 2)
        return (NULL);
    i = 1;
    a = malloc(sizeof(*a) * argc - 1);
    while (i < argc)
    {
		if (ps_is_a_number(argv[i]))
		{
			n = ps_atoi(argv[i]);
			if (!ps_has(a, n, i - 2))
				a[i - 1] = n;
			else
				return(ps_free(a));
		}	
		else
			return(ps_free(a));	
		++i;
    }
    return (a);
}

#include <stdio.h>

int push_swap(int argc, char **argv)
{
    int *a;
    int *b;

    a = valid_argv(argc, argv);
    if (!a)
    {
        write(2, "ERROR\n", 6);
        return (2);
    }
	for (int i = 0 ; i < argc  - 1; ++i)
		printf("%d\n", a[i]);
	free(a);
	return (0);
}
