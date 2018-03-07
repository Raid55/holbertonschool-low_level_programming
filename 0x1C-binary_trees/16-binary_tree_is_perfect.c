#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: tree to run thru
 *
 * Return: 1 if perfect or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tmp_l;
	size_t tmp_r;

	if (!tree)
		return (0);

	tmp_l = binary_tree_size(tree->left);
	tmp_r = binary_tree_size(tree->right);

	return (binary_tree_is_full(tree) && tmp_l == tmp_r ? 1 : 0);
}
/**
 * binary_tree_is_full - checks if tree is full
 * @tree: tree to run
 *
 * Return: 1 if full or 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t tmp = 1;

	if (!tree)
		return (0);

	if (tree->left)
		tmp = binary_tree_is_full(tree->left);
	if (tree->right)
		tmp = binary_tree_is_full(tree->right);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		tmp = 0;

	return (tmp);
}
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
