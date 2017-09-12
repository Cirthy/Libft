#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin_new_list;
	t_list	*new_chain;
	t_list	*current;

	if (!lst)
		return (NULL);
	begin_new_list = (*f)(lst);
	new_chain = begin_new_list;
	current = lst;
	while (current->next)
	{
		new_chain->next = (*f)(current->next);
		new_chain = new_chain->next;
	}
	return (begin_new_list);
}
