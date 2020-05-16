#include <stdio.h>
#include <stdlib.h>

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

int main()
{
	int choice = 0;
	int data = 0;
	struct tree *root_node = NULL;

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to insert a data in the struct tree\n");
		printf("\nEnter 2 to delete the data from the struct tree\n");
		printf("\nEnter 3 to display the struct tree in inorder traversal\n");
		printf("\nEnter 4 to display the struct tree in preorder traversal\n");
		printf("\nEnter 5 to display the struct tree in postorder traversal\n");
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
