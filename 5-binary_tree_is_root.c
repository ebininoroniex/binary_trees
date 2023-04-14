#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root, 0 otherwise 0.
 * If node is NULL return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node->parent == NULL)
return 1;
else if (node == NULL)
return 0;
else
return 0;
}
