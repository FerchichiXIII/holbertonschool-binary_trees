#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree)
	{
		if (tree->left && tree->right)
			return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
		else if (tree->left || tree->right)
			return (0);
	}
	return (1);
}