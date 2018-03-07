#include "binary_trees.h"

/**
 * binary_tree_sibling - returns sibling
 * @node to check: tree to run
 *
 * Return: sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (
		!node ||
		!node->parent ||
		!node->parent->right ||
		!node->parent->left
	)
		return (NULL);

	return (
		node->parent->right->n == node->n ? node->parent->left : node->parent->right
	);
}
