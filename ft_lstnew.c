#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_chain;

	if(!(new_chain = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new_chain->content = NULL;
		new_chain->content_size = 0;
	}
	else
	{
		if (!(new_chain->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(new_chain->content, content, content_size);
		new_chain->content_size = content_size;
	}
	new_chain->next = NULL;
	return (new_chain);
}
