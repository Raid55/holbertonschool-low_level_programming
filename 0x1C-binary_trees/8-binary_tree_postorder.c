#include "binary_trees.h"

/**
 * binary_tree_postorder - runs thru whole tree and exectures a func
 * @tree: head of tree to run thru
 * @func: func to apply to each number
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
