#include "binary_trees.h"

/**
 * max - returns the larger value of two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: int
*/
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (!tree)
		return (0);

	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	return (max(height_left, height_right));
}
