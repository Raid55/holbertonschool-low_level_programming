#include "binary_trees.h"

/**
 * binary_tree_height - finds height of tree from node
 * @tree: head of tree to run thru
 *
 * Return: a high of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tmp_left;
	size_t tmp_right;

	if (!tree)
		return (0);

	tmp_left = binary_tree_height(tree->left);
	tmp_right = binary_tree_height(tree->right);

	if (!tree->left && !tree->right)
		tmp_left--, tmp_right--;

	return (tmp_left > tmp_right ? tmp_left + 1 : tmp_right + 1);
}
