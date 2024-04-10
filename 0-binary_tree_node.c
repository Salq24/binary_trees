#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: new node value
 * Return: new node pointer, else, null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;
	newnode->left = NULL;

	return (newnode);
}
