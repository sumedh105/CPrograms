#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void insertNode(struct node **, int);
void deleteNode(struct node **);
void display(struct node *);

int main()
{
	int num = 0;
	int choice = 0;
	struct node *root = NULL;

	printf("\nEnter 1 to insert node in a list\n");
	printf("\nEnter 2 to remove a node from the list\n");
	printf("\nEnter 3 to display the contents of the list\n");
	printf("\nEnter 4 to exit\n");

	while (1)
	{
		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("\nEnter a number that needs to be inserted\n");
				scanf("%d", &num);
				insertNode(&root, num);
				break;
			case 2:
				deleteNode(&root);
				break;
			case 3:
				display(root);
				break;
			case 4:
				exit(0);
			default:
				break;
		}

	}

	return 0;
}

void insertNode(struct node **rootNode, int num)
{
	struct node *temp, *cur;
	cur = *rootNode;

	if (*rootNode == NULL)
	{
		*rootNode = (struct node *)malloc(sizeof(struct node));
		(*rootNode)->data = num;
		(*rootNode)->next = *rootNode;

	}
	else
	{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = num;
		temp->next = *rootNode;
		while (cur->next != *rootNode)
		{
			cur = cur->next;
		}
		cur->next = temp;
	}
}

void deleteNode(struct node **rootNode)
{
	struct node *cur, *prev;
	cur = *rootNode;
	prev = *rootNode;

	if (*rootNode == NULL)
	{
		printf("\nThe list is empty, nothing can be removed from the list\n");
	}

	else if ((*rootNode)->next == NULL)
	{
		*rootNode = NULL;
	}

	else
	{
		*rootNode = cur->next;
		cur->next = NULL;
		free(cur);
	}
}

void display(struct node *rootNode)
{
	struct node *cur;
	cur = rootNode;

	if (rootNode == NULL)
	{
		printf("\nThe list is empty, nothing to be displayed\n");
	}
	else
	{
		while (cur->next != rootNode)
		{
			printf("\ncur->data: %d\n", cur->data);
			cur = cur->next;
		}
			printf("\ncur->data: %d\n", cur->data);
	}
}

