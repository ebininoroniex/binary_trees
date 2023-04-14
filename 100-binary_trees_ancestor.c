#include "binary_trees.h"

/**
 * binary_trees_ancestor -  finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: pointer to the lowest common ancestor node
 * or NULL if no common ancestor is found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, 
		                     const binary_tree_t *second)
{
binary_tree_t *ancestor = NULL;

if (first == NULL || second == NULL)
return (NULL);

/* Find the lowest common ancestor recursively */
ancestor = first->parent;

while (ancestor != NULL)
{
if (binary_tree_is_ancestor(ancestor, second)
return (ancestor);
ancestor = ancestor->parent;
}
return (NULL);
}

/**
 * binary_tree_is_ancestor - checks if a node is an ancestor of another node
 * @node: a pointer to the node to check
 * @descendant: a pointer to the potential descendant node
 *
 * Return: 1 if node is an ancestor of descendant, 0 otherwise
 */
int binary_tree_is_ancestor(const binary_tree_t *node,
                            const binary_tree_t *descendant)
{
if (node == NULL || descendant == NULL)
return (0);

if (node = descendant)
return (1);

return (binary_tree_is_ancestor(node->left, descendant) ||
binary_tree_is_ancestor(node->right, descendant));
}
