#include "binary_trees.h"

/**
 * binary_tree_inorder - runs thru whole tree and exectures a func
 * @tree: head of tree to run thru
 * @func: func to apply to each number
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
