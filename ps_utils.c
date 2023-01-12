/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:24:27 by xadabunu          #+#    #+#             */
/*   Updated: 2023/01/12 16:24:29 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isspace(const char c)
{
	return (c == '\n' || c == '\t' || c == '\v' || c == ' ' || c == '\r' \
	|| c == '\f');
}

int	*ps_free(int *a)
{
	free(a);
	return (NULL);
}

long	ps_atoi(const char *nptr)
{
	unsigned int	i;
	long			res;
	int				sign;
	long			tmp;

	if (!nptr)
		return (2147483648);
	i = 0;
	while (ft_isspace(nptr[i]))
		++i;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i++] == '-')
			sign = -1;
	}
	res = 0;
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		tmp = res;
		res = res * 10 + nptr[i] - '0';
		if (tmp > res)
			return (2147483648);
		++i;
	}
	return (sign * res);
}

static int ps_len(const char* str)
{
	unsigned int	i;

	if (!str)
		return (12);
	i = 0;
	while (str[i] && i < 12)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (12);
		++i;
	}
	return (i);
}

int	ps_is_a_number(const char *str)
{
	int		i;
	long	l;

	i = 0;
	while (ft_isspace(str[i]))
		++i;
	if (ps_len(str + i) > 11)
		return (0);
	l = ps_atoi(str + i);
	if (l > INT_MAX || l < INT_MIN)
		return (0);
	return (1);
}

