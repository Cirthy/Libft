#include "libft.h"

void	ft_btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	if (root->left)
		ft_btree_apply_suffix(root->left, applyf);
	if (root->right)
		ft_btree_apply_suffix(root->right, applyf);
	(*applyf)(root);
}
