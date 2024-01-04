#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as the left child of another node
 * @parent: Pointer to the node to insert the left child in
 * @value: The value to insert in the node
 *
 * Return: Pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));

	if (new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left)
	{
		new->left = parent->left;
		(parent->left)->parent = new;
	}

	parent->left = new;

	return (new);
}
