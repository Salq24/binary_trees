#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: height, else, 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t t_depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent)
	{
		t_depth++;
		tree = tree->parent;
	}

	return (t_depth);
}
