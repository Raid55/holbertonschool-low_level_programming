#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if its a leafy is here
 * @node: node to check
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		if (!node->right && !node->left)
			return (1);
	return (0);
}
