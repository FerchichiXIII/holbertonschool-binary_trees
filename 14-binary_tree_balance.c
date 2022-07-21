#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: balance of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree)
	{
		balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	}
	return (balance);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t i = 0, j = 0;

		i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		j = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return (i > j ? i : j);
	}
	return (0);
}
