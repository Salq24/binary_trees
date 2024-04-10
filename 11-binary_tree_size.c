#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a bin tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: size. else 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);
}

