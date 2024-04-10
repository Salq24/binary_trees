#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree
 * using post-order transversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to the function
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)) 
{
    if (tree == NULL || func == NULL) 
    {
        return;
    }
    
    
    binary_tree_postorder(tree->left, func);

    binary_tree_postorder(tree->right, func);

    func(tree->n);
}
