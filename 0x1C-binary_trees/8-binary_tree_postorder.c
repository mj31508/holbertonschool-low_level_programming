#include "binary_trees.h"

/**
 * binary_tree_postorder -post order traversal through a binary tree
 * @tree: pointer to root node
 * @func: pointer to function for a recursive function call
 * Return: void
 **/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
