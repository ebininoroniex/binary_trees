2#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - function to delete entire binary tree
 * @tree: Pointer to the root node of tree to delete
 *
 * Return: If tree is NULL do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
