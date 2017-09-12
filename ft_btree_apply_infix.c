#include "libft.h"

void	ft_btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	if (root->left)
		ft_btree_apply_infix(root->left, applyf);
	(*applyf)(root->item);
	if (root->right)
		ft_btree_apply_infix(root->right, applyf);
}
