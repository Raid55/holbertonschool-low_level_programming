#include "binary_trees.h"

/**
 * binary_tree_size - finds size of full tree
 * @tree: head of tree to run thru
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
