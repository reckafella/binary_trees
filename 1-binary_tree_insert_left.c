#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node
 * @value: value to be inserted at the left-child node
 *
 * Return: pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (!parent)
		return (NULL);

	if (!parent->left)
	{
		parent->left = binary_tree_node(parent, value);

		if (!parent->left)
			return (NULL);
	}
	else
	{
		temp = parent->left;
		parent->left->left = binary_tree_node(temp, temp->n);
		if (!parent->left->left)
			return (NULL);
		parent->left->n = value;
	}

	return (parent->left);
}
