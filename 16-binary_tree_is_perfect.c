#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_perfect(tree->left) -
	 binary_tree_height(tree->right) == 0 ? 1 : 0);
}

/**
 * maximum - returns the maximum of values in a binary tree
 * @a: value 1
 * @b: value 2
 * Return: the maximum of the two values
 */

size_t maximum(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (maximum(left_height, right_height) + 1);
}
