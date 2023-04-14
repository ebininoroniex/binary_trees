#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int height_left = 0, height_right = 0;

if (tree == NULL)
return (0);

if (tree->left)
height_left = binary_tree_height(tree->left) + 1;

if (tree->right)
height_right = binary_tree_height(tree->right) + 1;

return (height_left - height_right);
}
