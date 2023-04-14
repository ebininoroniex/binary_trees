#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child.
 * @tree: Pointer to the root node of the tree
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);


if (tree->left == NULL && tree->right == NULL)
return (0);

return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
