#include <stdio.h>
#include <stdlib.h>

struct node
{
	int element;
	struct node *next;
};

void insertNodeAtBeg(struct node **, int num);
void deleteFromBeg(struct node **);
void insertNodeAtEnd(struct node **, int num);
void deleteFromEnd(struct node **);
void insertNodeAtLocation(struct node **, int num, int loc);
void deleteFromLocation(struct node **, int loc);
void display(struct node *);

int main()
{
	int choice = 0;
	int num = 0;
	int loc = 0;
	struct node *root = NULL;

	printf("\nPress 1 to insert a node at the beginning into the linked list\n");
	printf("\nPress 2 to remove a node from the beginning from the linked list\n");
	printf("\nPress 3 to insert a node at the end into the linked list\n");
	printf("\nPress 4 to remove a node from the end from the linked list\n");
	printf("\nPress 5 to insert a node at a specified location in the linked list\n");
	printf("\nPress 6 to remove a node from a specified location in the linked list\n");
	printf("\nPress 7 to display the linked list\n");
	printf("\nPress 8 to exit\n");

	while (1)
	{
		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				printf("\nEnter a number that needs to be inserted\n");
				scanf("%d", &num);
				insertNodeAtBeg(&root, num);
				break;

			case 2:
				deleteFromBeg(&root);
				break;

			case 3:
				printf("\nEnter the number that needs to be inserted\n");
				scanf("%d", &num);
				insertNodeAtEnd(&root, num);
				break;

			case 4:
				deleteFromEnd(&root);
				break;

			case 5:
				printf("\nEnter the number that needs to be inserted\n");
				scanf("%d", &num);
				printf("\nEnter the location where a node needs to be inserted\n");
				scanf("%d", &loc);
				insertNodeAtLocation(&root, num, loc);
				break;

			case 6:
				printf("\nEnter a location from where a node is to be removed\n");
				scanf("%d", &loc);
				deleteFromLocation(&root, loc);
				break;

			case 7:
				display(root);
				break;

			case 8:
				exit(0);

			default:
				break;

		}

	}


	return 0;
}

void insertNodeAtBeg (struct node **rootNode, int num)
{
	struct node *cur;
	struct node *prev;

	if (*rootNode == NULL)
	{
		*rootNode = (struct node *)malloc(sizeof(struct node));
		if (*rootNode == NULL)
		{
			printf("\nMemory cannot be allocated\n");
		}
		else
		{
			(*rootNode)->element = num;
			(*rootNode)->next = NULL;
		}
	}
	else
	{
		cur = (struct node *)malloc(sizeof(struct node));
		cur->element = num;
		cur->next = *rootNode;
		*rootNode = cur;
	}
}

void deleteFromBeg(struct node **rootNode)
{
	struct node *cur;
	struct node *prev;

	if (*rootNode == NULL)
	{
		printf("\nThe list is empty, nothing can be deleted\n");
	}
	else
	{
		cur = *rootNode;
		prev = *rootNode;

		*rootNode = cur->next;
		cur->next = NULL;
	}
}

void insertNodeAtEnd(struct node **rootNode, int num)
{
	struct node *cur = NULL;
	struct node *prev = NULL;

	if (*rootNode == NULL)
	{
		*rootNode = (struct node *)malloc(sizeof(struct node));
		if (*rootNode == NULL)
		{
			printf("\nMemory is not allocated\n");
		}
		else
		{
			(*rootNode)->element = num;
			(*rootNode)->next = NULL;
		}
	}
	else
	{
		cur = *rootNode;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}	
		cur->next = (struct node *)malloc(sizeof(struct node));
		cur = cur->next;
		cur->element = num;
		cur->next = NULL;
	}
}

void deleteFromEnd(struct node **rootNode)
{
	struct node *cur, *prev;

	if (*rootNode == NULL)
	{
		printf("\nNothing to delete, the list is empty\n");
	}
	else if ((*rootNode)->next == NULL)
	{
		*rootNode = NULL;
	}
	else
	{
		cur = *rootNode;
		prev = *rootNode;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		while (prev->next != cur)
		{
			prev = prev->next;
		}
		prev->next = NULL;
	}
}

void insertNodeAtLocation(struct node **rootNode, int num, int loc)
{
	struct node *cur;
	struct node *temp;
	int index = 0;
	int linkedListLength = 0;

	if (*rootNode == NULL)
	{
		*rootNode = (struct node *)malloc(sizeof(struct node));
		if (*rootNode == NULL)
		{
			printf("\nMemory cannot be allocated\n");
		}
		else
		{
			(*rootNode)->element = num;
			(*rootNode)->next = NULL;
		}
	}
	else
	{
		cur = *rootNode;

		while (cur != NULL)
		{
			++linkedListLength;
			cur = cur->next;
		}

		printf("\nNumber of nodes in the linked list are: %d\n", linkedListLength);

		cur = *rootNode;
		while (index < (loc - 1))
		{
			cur = cur->next;
			++index;
		}

		temp = (struct node *)malloc(sizeof(struct node));
		temp->element = num;
		temp->next = cur->next;
		cur->next = temp;
	}
}

void deleteFromLocation(struct node **rootNode, int loc)
{
	struct node *cur;
	struct node *temp;
	int index = 0;
	int linkedListLength = 0;

	if (*rootNode == NULL)
	{
		printf("\nThe list is empty, nothing can be deleted\n");
	}
	else
	{
		cur = *rootNode;

		while (cur != NULL)
		{
			++linkedListLength;
			cur = cur->next;
		}

		cur = *rootNode;
		while (index < (loc - 1))
		{
			cur = cur->next;
			++index;
		}
		temp = cur->next;
		cur->next = temp->next;
		free(temp);
	}
}

void display(struct node *rootNode)
{
	struct node *cur;
	cur = rootNode;

	if (rootNode == NULL)
	{
		printf("\nThe list is empty, there is nothing to display\n");
	}

	else
	{
		while (cur != NULL)
		{
			printf("\ncur->element:%d\n", cur->element);
			cur = cur->next;
		}
	}
}
