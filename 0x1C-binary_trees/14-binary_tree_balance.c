#include "binary_trees.h"

/**
 * binary_tree_balance - finds the balance bwtween branches
 * @tree: tree to run thru
 *
 * Return: 1 if tree is balanced and 0 if not
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t tmp_l;
	size_t tmp_r;

	if (!tree)
		return (0);

	tmp_l = binary_tree_balance(tree->left);
	tmp_r = binary_tree_balance(tree->right);

	if (tree->left)
		tmp_l++;
	if (tree->right)
		tmp_r++;

	return (tmp_l - tmp_r);
}
