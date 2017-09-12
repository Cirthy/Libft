#include "libft.h"

/*
// NE MODIFIE PAS LE NEXT DE NEW
*/

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*current;

	if (!(*alst))
	{
		*alst = new;
		return;
	}
	current = *alst;
	while(current->next)
		current = current->next;
	current->next = new;
}