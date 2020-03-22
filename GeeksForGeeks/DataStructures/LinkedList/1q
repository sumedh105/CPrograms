#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

static void deleteFromBeg(struct node **head)
{
	struct node *temp = NULL;

	if (*head == NULL)
	{
		printf("\nList is empty, nothing can be deleted\n");
	}

	else if ((*head)->next == NULL)
	{
		*head = NULL;
		free(*head);
	}

	else
	{
		temp = *head;
		*head = temp->next;

		free(temp);
	}
}

static void deleteFromEnd(struct node **head)
{
	struct node *temp = NULL;
	struct node *prev = NULL;

	if (*head == NULL)
	{
		printf("\nThe list is empty, nothing can be deleted.\n");
	}
	
	else if ((*head)->next == NULL)
	{
		*head = NULL;
		free(*head);
	}

	else
	{
		temp = *head;
		prev = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		while (prev->next != temp)
		{
			prev = prev->next;
		}

		prev->next = NULL;
		free(temp);
	}
}

static void display(struct node **head)
{
	struct node *temp;

	if (*head == NULL)
	{
		printf("\nThe list is empty, there is nothing to display\n");
	}
	else
	{
		temp = *head;

		while (temp != NULL)
		{
			printf("\ntemp->data: %d\n", temp->data);
			temp = temp->next;
		}
	}
}

static void insertAtBeg(struct node **head, int data)
{
	int index = 0;
	struct node *temp = NULL;
	struct node *cur;

	if (*head == NULL)
	{
		*head = (struct node *)malloc(sizeof(struct node));
		(*head)->data = data;
		(*head)->next = NULL;
	}

	else
	{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = data;
		temp->next = *head;

		*head = temp;
	}
}

static void insertAtEnd(struct node **head, int data)
{
	int index = 0;
	struct node *temp = NULL;
	struct node *cur;

	if (*head == NULL)
	{
		*head = (struct node *)malloc(sizeof(struct node));
		(*head)->data = data;
		(*head)->next = NULL;
	}

	else
	{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = data;
		temp-> next = NULL;

		cur = *head;
		while (cur-> next != NULL)
		{
			cur = cur->next;
		}
		cur->next = temp;
	}
}

int main()
{
	struct node *head = NULL;
	struct node *temp = NULL;
	int index = 0;
	int choice = 0;
	int data = 0;
	int nodeNum = 0;

	while (1)
	{
		printf("\nPress 1 to insert an element at the start of the linked list\n");
		printf("\nPress 2 to insert an element at the end of the linked list\n");
		printf("\nPress 3 to delete an element from the beginning of the linked list\n");
		printf("\nPress 4 to delete an element from the end of the linked list\n");
		printf("\nPress 5 to display the linked list\n");
		printf("\nPress 0 to exit\n");

		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
			{
				printf("\nEnter the data that needs to be inserted in the linked list\n");
				scanf("%d", &data);
				insertAtBeg(&head, data);
				break;
			}

			case 2:
			{
				printf("\nEnter the data that needs to be inserted in the linked list\n");
				scanf("%d", &data);
				insertAtEnd(&head, data);
				break;
			}

			case 3:
			{
				deleteFromBeg(&head);
				break;
			}

			case 4:
			{
				deleteFromEnd(&head);
				break;
			}

			case 5:
			{
				display(&head);
				break;
			}

			case 0:
			{
				exit(0);
			}
		}
	}

	return 0;
}
