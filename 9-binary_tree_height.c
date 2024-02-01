#include "binary_trees.h"

/**
 * binary_tree_height - The function that measures the height of binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of tree or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t gauche = 0, droit = 0;

		gauche = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		droit = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((gauche > droit) ? gauche : droit);
	}
	return (0);
}
