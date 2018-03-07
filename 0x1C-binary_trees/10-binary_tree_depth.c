#include "binary_trees.h"

/**
 * binary_tree_depth - finds depth of tree from node
 * @node: node to run thru
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (0);

	return (1 + binary_tree_depth(node->parent));
}
