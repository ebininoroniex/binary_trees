#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* Check if the left and right subtrees have the same height */
    if (left_height == right_height)
    {
        /* If the left and right subtrees are NULL, the tree is perfect */
        if (tree->left == NULL && tree->right == NULL)
            return (1);

        /* If the left and right subtrees are not NULL, check if they are perfect */
        if (tree->left != NULL && tree->right != NULL)
            return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
    }

    /* If the left and right subtrees do not have the same height, the tree is not perfect */
    return (0);
}
