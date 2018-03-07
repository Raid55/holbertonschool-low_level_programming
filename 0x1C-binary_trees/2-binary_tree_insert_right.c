#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates inserts node to the right
 * @parent: parent node
 * @value: value to assign
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	tmp = malloc(sizeof(binary_tree_t));
	if (!tmp)
		return (NULL);

	tmp->n = value;
	tmp->left = NULL;
	tmp->parent = parent;

	if (parent->right)
		tmp->right = parent->right, tmp->right->parent = tmp;
	else
		tmp->right = NULL;

	parent->right = tmp;

	return (tmp);
}
