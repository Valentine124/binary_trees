#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse through a binary tree
 * using in-order traversal
 * @tree: The tree root
 * @func: Pointer to function to be called on each traversal
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
