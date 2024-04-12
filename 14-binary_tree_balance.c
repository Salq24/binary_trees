#include "binary_trees.h"

/**
 * binary_tree_height - calcs the height
 * @tree: the root node
 * Return: height
 */

size_t m_binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + m_binary_tree_height(tree->left) : 1;
	height_r = tree->right ? 1 + m_binary_tree_height(tree->right) : 1;
	return ((height_l > height_r) ? height_l : height_r );
}


/**
 * binary_tree_balance - measures the balance factor
 *
 * @tree: the root node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	height_left = m_binary_tree_height(tree->left);
	height_right = m_binary_tree_height(tree->right);

	return (height_left - height_right);
}
