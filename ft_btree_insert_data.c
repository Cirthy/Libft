#include "libft.h"

void	ft_btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *))
{
	t_btree	*new_node;

	new_node = ft_btree_create_node(item);
	if (!*root)
	{
		*root = new_node;
		return ;
	}
	if ((*cmpf)((*root)->item, item) > 0)
	{
		if (!(*root)->left)
			(*root)->left = new_node;
		else
			ft_btree_insert_data(&((*root)->left), item, cmpf);
	}
	else
	{
		if (!(*root)->right)
			(*root)->right = new_node;
		else
			ft_btree_insert_data(&((*root)->right), item, cmpf);
	}
}
