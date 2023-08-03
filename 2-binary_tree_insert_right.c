#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: value to be inserted at the right-child node
 *
 * Return: pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (!parent)
		return (NULL);

	if (!parent->right)
	{
		parent->right = binary_tree_node(parent, value);

		if (!parent->right)
			return (NULL);
	}
	else
	{
		temp = parent->right;
		parent->right->right = binary_tree_node(temp, temp->n);
		if (!parent->right->right)
			return (NULL);
		parent->right->n = value;
	}

	return (parent->right);
}
