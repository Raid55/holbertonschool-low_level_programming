#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates inserts node to the left
 * @parent: parent node
 * @value: value to assign
 * 
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	tmp = malloc(sizeof(binary_tree_t));
	if (!tmp)
		return (NULL);

	tmp->n = value;
	tmp->right = NULL;
	tmp->parent = parent;

	if (parent->left)
		tmp->left = parent->left, tmp->left->parent = tmp;
	else
		tmp->left = NULL;

	parent->left = tmp;

	return (tmp);
}
