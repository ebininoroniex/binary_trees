#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node, or NULL if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* If node is the left child, return the right child */
    if (node == node->parent->left)
        return (node->parent->right);

    /* If node is the right child, return the left child */
    return (node->parent->left);
}
