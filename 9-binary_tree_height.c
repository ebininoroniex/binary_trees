#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return -1;
int rightHeight = binary_tree_height(tree->right);
int leftHeight = binary_tree_height(tree->left);

if (rightHeight > leftHeight)
return (rightHeight + 1);
else
return (leftHeight + 1);
}
