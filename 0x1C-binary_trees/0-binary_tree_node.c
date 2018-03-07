#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node and returns it
 * @parent: parent node
 * @value: value to assign
 * 
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));
	if (!tmp)
		return (NULL);

	tmp->left = NULL;
    tmp->right = NULL;
	tmp->parent = parent;
	tmp->n = value;

	return (tmp);
}
