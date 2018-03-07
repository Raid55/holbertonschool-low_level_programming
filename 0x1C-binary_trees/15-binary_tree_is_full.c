#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: tree to run
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t tmp = 1;

	if (!tree)
		return (0);

	if (tree->left)
		tmp = binary_tree_is_full(tree->left);
	if (tree-> right)
		tmp = binary_tree_is_full(tree->right);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		tmp = 0;

	return (tmp);
}
