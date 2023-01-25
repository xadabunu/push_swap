#include "push_swap.h"

static void	reverse_r(t_list **a)
{
	t_list	*tmp;

	tmp = ft_lstlast(*a);
	tmp->next = *a;
	*a = tmp;
	while (tmp->next != *a)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	rra(t_list **a)
{
	reverse_r(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	reverse_r(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_r(a);
	reverse_r(b);
	write(1, "rrr\n", 4);
}