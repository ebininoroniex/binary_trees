#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node, or NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    /* If node's parent is the left child of its grandparent, return the right child of the grandparent */
    if (node->parent == node->parent->parent->left)
        return (node->parent->parent->right);

    /* If node's parent is the right child of its grandparent, return the left child of the grandparent */
    return (node->parent->parent->left);
}
