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
	if (!tree->left && !tree->right)
		return (1);

	tmp_left = binary_tree_height(tree->left);
	tmp_right = binary_tree_height(tree->right);

	if (!tree->left && !tree->right)
		tmp_left--, tmp_right--;

	return (tmp_left > tmp_right ? tmp_left + 1 : tmp_right + 1);
}

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

	tmp_l = binary_tree_height(tree->left);
	tmp_r = binary_tree_height(tree->right);

	/**
	* printf(
	*	"[%zu][%zu]\n",
	*	binary_tree_height(tree->left),
	*	binary_tree_height(tree->right));
	*/
	/**
	* printf(
	*	"[%zu][%zu]\n",
	*	tmp_l,
	*	tmp_r);
	*/

	return (tmp_l - tmp_r);
}
