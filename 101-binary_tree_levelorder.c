#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_Q_SIZE 500

/**
 * binary_tree_levelorder - level order taversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to function call of each node
 *
 * Return: If tree or func is NULL, do nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
int rear, front;
binary_tree_t **queue = createQueue(&front, &rear);

while (tree) 
{
func(tree->n);
/*Enque left*/
if (tree->left)
enQueue(queue, &rear, tree->left);

/*Enqueue right*/
if (tree->right)
enQueue(queue, &rear, tree->right);

/*Dequeue node and make it temp_node*/
tree = deQueue(queue, &front);
}
}

/*UTILITY FUNCTIONS*/
binary_tree_t** createQueue(int* front, int* rear)
{
binary_tree_t** queue = (binary_tree_t**)malloc(sizeof(binary_tree_t*) * MAX_Q_SIZE);
*front = *rear = 0;
return (queue);
}

void enQueue(binary_tree_t** queue, int* rear, binary_tree_t* new_node)
{
queue[*rear] = new_node;
(*rear)++;
}

binary_tree_t* deQueue(binary_tree_t** queue, int* front)
{
(*front)++;
return queue[*front - 1];
}
