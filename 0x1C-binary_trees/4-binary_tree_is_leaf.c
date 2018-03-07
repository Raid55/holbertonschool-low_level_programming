#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if its a leafy is here
 * @node: node to check
 *
 * Return: 1 if leaf or 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		if (!node->right && !node->left)
			return (1);
	return (0);
}
