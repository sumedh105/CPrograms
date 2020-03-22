#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

void insertAtBeg(struct node **, int);
void deleteFromBeg(struct node **);
void insertAtEnd(struct node **, int);
void deleteFromEnd(struct node **);
void display(struct node *);

int main()
{
	int choice = 0;
	int num = 0;
	struct node *rootNode = NULL;

	printf("\nEnter 1 to insert a node at the beginning of the list\n");
	printf("\nEnter 2 to delete a node from the beginning of the list\n");
	printf("\nEnter 3 to insert a node at the end of the list\n");
	printf("\nEnter 4 to delete a node from the end of the list\n");
	printf("\nEnter 5 to display the list\n");
	printf("\nEnter 6 to exit\n");

	while (1)
	{
		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("\nEnter the number that needs to be inserted in a list\n");
				scanf("%d", &num);
				insertAtBeg(&rootNode, num);
				break;
			case 2:
				deleteFromBeg(&rootNode);
				break;
			case 3:
				printf("\nEnter the number that needs to be inserted in a list\n");
				scanf("%d", &num);
				insertAtEnd(&rootNode, num);
				break;
			case 4:
				deleteFromEnd(&rootNode);
				break;
			case 5:
				display(rootNode);
				break;
			case 6:
				exit(0);
			default:
				break;
		}
	}
		
	return 0;
}

void insertAtBeg(struct node **rootNode, int num)
{
	struct node *cur, *prev, *temp;

	if (*rootNode == NULL)
	{
		*rootNode = (struct node *)malloc(sizeof(struct node));
		(*rootNode)->data = num;
		(*rootNode)->prev = NULL;
		(*rootNode)->next = NULL;
	}
	else
	{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = num;
		temp->prev = NULL;
		temp->next = *rootNode;
		(*rootNode)->prev = temp;
		*rootNode = temp;
	}
}

void deleteFromBeg(struct node **rootNode)
{
	struct node *cur, *prev, *temp;
	cur = *rootNode;

	if (*rootNode == NULL)
	{
		printf("\nThe list is empty, nothing can be removed\n");
	}

	else if (((*rootNode)->next == NULL) && ((*rootNode)->prev == NULL))
	{
		*rootNode = NULL;
	}

	else
	{
		cur = cur->next;
		cur->prev = NULL;
		*rootNode = cur;
	}
}

void insertAtEnd(struct node **rootNode, int num)
{
	struct node *cur, *prev, *temp;
	cur = *rootNode;
	
	if (*rootNode == NULL)
	{
		*rootNode = (struct node *)malloc(sizeof(struct node));
		(*rootNode)->prev = NULL;
		(*rootNode)->next = NULL;
		(*rootNode)->data = num;
	}
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		temp = (struct node *)malloc(sizeof(struct node));
		temp->next = NULL;
		temp->prev = cur;
		temp->data = num;
		cur->next = temp;
	}
}

void deleteFromEnd(struct node **rootNode)
{
	struct node *cur, *prev, *temp;
	cur = *rootNode;

	if (*rootNode == NULL)
	{
		printf("\nThe list is empty, nothing can be deleted from the list\n");
	}

	else if (((*rootNode)->next == NULL) && ((*rootNode)->prev) == NULL)
	{
		*rootNode = NULL;
	}

	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur = cur->prev;
		cur->next = NULL;
	}
}

void display(struct node *rootNode)
{
	struct node *cur;
	cur = rootNode;

	if (rootNode == NULL)
	{
		printf("\nThe list is empty, cannot remove anything\n");
	}
	else
	{
		while (cur != NULL)
		{
			printf("\ncur->data: %d\n", cur->data);
			cur = cur->next;
		}
	}
}
