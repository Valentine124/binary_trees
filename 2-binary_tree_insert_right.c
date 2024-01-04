#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node to the right child of another node
 * @parent: A pointer to the node to insert the right child in
 * @value: The value to insert in the node
 *
 * Return: Pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));

	if (parent == NULL || new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent->right)
	{
		new->right = parent->right;
		(parent->right)->parent = new;
	}

	parent->right = new;

	return (new);
}
