#include "libft.h"

void	*ft_btree_search_item(t_btree *root, void *data_ref,
							int (*cmpf)(void *, void *))
{
	if (!root)
		return (0);
	if ((*cmpf)(root->item, data_ref) > 0)
	{
		if (root->left)
			return (ft_btree_search_item(root->left, data_ref, cmpf));
		else
			return (0);
	}
	else if ((*cmpf)(root->item, data_ref) < 0)
	{
		if (root->right)
			return (ft_btree_search_item(root->right, data_ref, cmpf));
		else
			return (0);
	}
	else
		return (data_ref);
}
