#include "binary_trees.h"

/**
 * binary_tree_inorder - in order traversal
 * @tree: pointer to a binary tree
 * @func: pointer to a binary tree
 *
 * Return: NO return
 **/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
