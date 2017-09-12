#include "libft.h"

int	ft_btree_level_count(t_btree *root)
{
	int	left_depth;
	int	right_depth;

	if (!root)
		return (0);
	left_depth = 1 + ft_btree_level_count(root->left);
	right_depth = 1 + ft_btree_level_count(root->right);
	if (left_depth > right_depth)
		return (left_depth);
	return (right_depth);
}
