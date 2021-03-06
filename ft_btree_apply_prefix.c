#include "libft.h"

void	ft_btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	(*applyf)(root->item);
	if (root->left)
		ft_btree_apply_prefix(root->left, applyf);
	if (root->right)
		ft_btree_apply_prefix(root->right, applyf);
}
