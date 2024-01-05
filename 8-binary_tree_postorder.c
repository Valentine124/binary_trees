#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse through a binary tree
 * using post-order traversal
 * @tree: The tree root
 * @func: Pointer to function to call on each node visited
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree ==  NULL || func == NULL)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);

	if (tree->right)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
