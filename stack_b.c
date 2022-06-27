#include "push_swap.h"

int	full_sorted_b(t_list *b)
{
	int	temp;

	while (b)
	{
		temp = *((int *)b->content);
		b = b->next;
		if (b == NULL)
			break ;
		if (temp < *((int *)b->content))
			return (0);
	}
	return (1);
}

int	sorted_b(t_list *b)
{
	int	num;
	int modflag;
	t_list	*temp;
	
	modflag = 0;
	temp = b;
	while (b)
	{
		num = *((int *)temp->content);
		temp = temp->next;
		if (temp == NULL)
			break ;
		if (temp->next == NULL &&  *((int *)temp->content) < *((int *)b->content))
			return (0);
		if (num < *((int *)temp->content))
		{
			if (modflag)
				return (0);
			modflag = 1;
		}
	}
	return (1);
}

void	sort_three_b(t_list **a, t_list **b)
{
	if (full_sorted_b(*b))
		return ;
	if (!sorted_b(*b))
	print_and_do_command("sb", a, b);
	final_list_sort_b(a, b);
}