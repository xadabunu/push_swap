/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:58:14 by xadabunu          #+#    #+#             */
/*   Updated: 2023/01/10 16:58:19 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include "libft/libft.h"

void	push_swap(int argc, char **agrv);
long	ps_atoi(const char *nptr);
int		ps_is_a_number(const char *str);
t_list	*ps_free(t_list *a);

#endif
