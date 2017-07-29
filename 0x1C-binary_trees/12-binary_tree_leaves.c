#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_leaves - function that counts leaves in a binary tree
 * @tree: pointer to a tree
 *
 *
 * Return: number of leaves
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (0);
        if (tree->left != NULL && tree->right !=NULL)
		return (1);
	return (binary_tree_leaves(tree->right + binary_tree_leaves(tree->left));
}
