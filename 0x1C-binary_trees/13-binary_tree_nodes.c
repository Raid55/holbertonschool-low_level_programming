#include "binary_trees.h"

/**
 * binary_tree_nodes - finds the amount of node
 * @tree: tree to run thru
 *
 * Return: amount of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t tmp = 0;

	if (!tree)
		return (0);

	tmp += binary_tree_nodes(tree->left);
	tmp += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		tmp++;

	return (tmp);
}
