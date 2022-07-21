#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the number of leaves in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		if (!tree->left && !tree->right)
			leaves++;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
