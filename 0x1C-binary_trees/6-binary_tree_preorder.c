#include "binary_trees.h"

/**
 * binary_tree_preorder - runs thru whole tree and exectures a func
 * @tree: head of tree to run thru
 * @func: func to apply to each number
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
