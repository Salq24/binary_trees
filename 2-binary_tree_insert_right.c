#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right
 * child of another node
 *
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: pointer to the created node, else, null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
	}

	parent->right = newnode;

	return (newnode);
}


