#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: pointer to the parent of node to create
 * @value: value to put in the new node
 * return: pointer to the new node or NULL upon failure
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

binary_tree_t *new;

new = (binary_tree_t*)malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);

new->parent = parent;
new->n = value;
new->left = NULL;
new->right = NULL;

return (new);
}
