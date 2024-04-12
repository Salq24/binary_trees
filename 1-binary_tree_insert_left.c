#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left
 * child of another node
 *
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: pointer to the created node, else, null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
	}

	parent->left = newnode;

	return (newnode);
}


