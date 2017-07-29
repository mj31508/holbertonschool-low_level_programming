#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_balance - measurment of binary tree
 * @tree: pointer to binary tree
 * Return: 0 if Tree is NULL
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int counter_1;
	int counter_2;
	const binary_tree_t *temp_1;
	const binary_tree_t *temp_2;

	temp_1 = tree;
	temp_2 = tree;
	counter_1 = 0;
	counter_2 = 0;

	if (tree == NULL)
		return (0);
	while (temp->left != NULL)
	{
		temp_1 = temp->left;
		counter_1 += 1;
	}

	while (temp->right != NULL)
	{
		temp_2 = temp->left;
		counter_2++;
	}
	return (counter_1 - counter_2);
}
