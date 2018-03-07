#include "binary_trees.h"

/**
 * binary_tree_uncle - returns uncle
 * @node to check: tree to run
 *
 * Return: uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (
		!node ||
		!node->parent ||
		!node->parent->parent ||
		!node->parent->parent->left ||
		!node->parent->parent->right
	)
		return (NULL);

	return (
		node->parent->parent->right->n == node->parent->n ?
		node->parent->parent->left :
		node->parent->parent->right
	);
}
