#include "push_swap.h"

static void	p(t_list **a, t_list **b)
{
	if (ft_lstsize(*b))
	{
		t_list	*tmp;

		tmp = (*b)->next;
		ft_lstadd_front(a, *b);
		*b = tmp;
	}
}

void	pa(t_list **a, t_list **b)
{
	p(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	p(b, a);
	write(1, "pb\n", 3);
}
