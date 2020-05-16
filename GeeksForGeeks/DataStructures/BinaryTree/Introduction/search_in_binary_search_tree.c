#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct tree
{
	int data;
	struct tree *left_child;
	struct tree *right_child;
};

static void insert(struct tree **root_node, int data);
static int delete(struct tree **root_node);
static int inorder(struct tree *root_node);
static int preorder(struct tree *root_node);
static int postorder(struct tree *root_node);
static bool search_data(struct tree *root_node, int num);

int main()
{
	int choice = 0;
	int data = 0;
	int num = 0;
	bool result = 0;
	struct tree *root_node = NULL;

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to insert a data in the struct tree\n");
		printf("\nEnter 2 to delete the data from the struct tree\n");
		printf("\nEnter 3 to display the struct tree in inorder traversal\n");
		printf("\nEnter 4 to display the struct tree in preorder traversal\n");
		printf("\nEnter 5 to display the struct tree in postorder traversal\n");
		printf("\nEnter 6 to search an element in the tree\n");
		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0:
				exit(1);
			case 1:
				printf("\nEnter the data that needs to be inserted in a struct tree\n");
				scanf("%d", &data);
				insert(&root_node, data);
				break;
			case 2:
				data = delete(&root_node);
				printf("\nThe deleted data is: %d\n", data);
				break;
			case 3:
				inorder(root_node);
				break;
			case 4:
				preorder(root_node);
				break;
			case 5:
				postorder(root_node);
				break;
			case 6:
				printf("\nEnter a number that needs to be searched in a tree\n"); 
				scanf("%d", &num);
				result = search_data(root_node, num);
				if (result == 0)
				{
					printf("\nElement is not found in the tree\n");
				}
				else if (result == 1)
				{
					printf("\nElement found in a tree\n");
				}
			default:
				break;
		}
	}

	return 0;
}

static void insert(struct tree **root_node, int data)
{
	if (*root_node == NULL)
	{
		*root_node = (struct tree *)malloc(sizeof(struct tree *));
		(*root_node)->data = data;
		(*root_node)->left_child = NULL;
		(*root_node)->right_child = NULL;
	}
	else
	{
		if (data < (*root_node)->data)
		{
			insert(&((*root_node)->left_child), data);
		}
		else if (data > (*root_node)->data)
		{
			insert(&((*root_node)->right_child), data);
		}
	}
}

static int delete(struct tree **root_node)
{
	/* Do nothing. */
}

static int inorder(struct tree *root_node)
{
	if (root_node != NULL)
	{
		inorder(root_node->left_child);
		printf("\n%d\n", root_node->data);
		inorder(root_node->right_child);
	}
	else
	{
		return 0;
	}
}

static int preorder(struct tree *root_node)
{
	if (root_node != NULL)
	{
		printf("\n%d\n", root_node->data);
		preorder(root_node->left_child);
		preorder(root_node->right_child);
	}
	else
	{
		return 0;
	}
}

static int postorder(struct tree *root_node)
{
	if (root_node != NULL)
	{
		postorder(root_node->left_child);
		postorder(root_node->right_child);
		printf("\n%d\n", root_node->data);
	}
	else
	{
		return 0;
	}
}

static bool search_data(struct tree *root_node, int num)
{
	if (root_node == NULL)
	{
		printf("\nTree empty\n");
		return 0;
	}
	else
	{
		if (num == root_node->data)
		{
			return 1;
		}
		else if (num < root_node->data)
		{
			search_data(root_node->left_child, num);
		}
		else if (num > root_node->data)
		{
			search_data(root_node->right_child, num);
		}
	}
}
