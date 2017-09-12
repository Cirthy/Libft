#include "libft.h"

void	ft_listdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*current;

	current = *alst;
	while (current)
	{
		tmp = current->next;
		(*del)(current->content, current->content_size);
		free(current);
		current = tmp;
	}
	*alst = NULL;
}
