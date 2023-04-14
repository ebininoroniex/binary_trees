#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of a tree
 * @parent: Pointer to the node to create the right child in
 * @value: Value to store in the new node
 *
 * Return: A pointer to the created node or NULL on failure or if pointer is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newRight;

newRight = binary_tree_node(parent, value);
if (newRight == NULL || parent == NULL)
return (NULL);

if (parent->right != NULL)
{
newRight->right = parent->right;
parent->right->parent = newRight;
}
parent->right = newRight;

return newRight;
}
