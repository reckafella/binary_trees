#include "binary_trees.h"
/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: pointer to the node of the binary tree
 *
 * Return: size of binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t t_size;

	if (!tree)
		return (0);

	t_size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (t_size);
}
