#include "binary_trees.h"

/**
 * binary_tree_leaves - finds the amount of leaves
 * @tree: tree to run thru
 *
 * Return: amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tmp = 0;

	if (!tree)
		return (0);

	tmp += binary_tree_leaves(tree->left);
	tmp += binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		tmp++;

	return (tmp);
}
