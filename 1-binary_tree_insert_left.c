#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the leftChild of another node
 * @parent: Pointer to the node to insert left child in.
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newLeft;

newLeft = binary_tree_node(parent, value);

if (newLeft == NULL || parent == NULL)
return (NULL);

if (parent->left != NULL)
{
newLeft->left = parent->left;
parent->left->parent = newLeft;
}

parent->left = newLeft;

return (newLeft);
}
