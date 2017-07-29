#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to binary tree
 *
 *
 * Return: total
 **/

size_t binary_tree_depth(const binary_tree_t *node)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right == NULL)
		return (2);
	if (tree->left == NULL && tree->right != NULL)
		return (2);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
