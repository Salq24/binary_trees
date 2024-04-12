#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: height, else, 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l;
	size_t h_r;

	if (tree == NULL)
	{
		return (0);
	}

	h_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (h_l > h_r ? h_l : h_r);
}
