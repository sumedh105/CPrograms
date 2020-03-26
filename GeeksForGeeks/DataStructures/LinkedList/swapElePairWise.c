#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

static void swapPairwise(struct node **head)
{
	struct node *cur = NULL;
	struct node *prev = NULL;
	struct node *temp = NULL;
	struct node *posk = NULL;
	int count = 0;

	if (*head == NULL)
	{
		printf("\nThe list is empty, nothing can be swapped\n");
	}

	else
	{
		prev = *head;
		temp = *head;

		while ((prev != NULL) && (prev->next != NULL))
		{

			cur = prev->next;
			temp = cur->next;
			cur->next = prev;
			prev->next = temp;

			if (count == 0)
			{
				*head = cur;
				posk = cur;
			}

			else
			{
				posk->next->next = cur;
				posk = cur;
			}

			prev = prev->next;

			++count;
		}
	}
}

static int countGivenInt(struct node **head, int num)
{
	struct node *temp = NULL;
	int count = 0;

	if (*head == NULL)
	{
		/* do nothing */
	}

	else
	{
		temp = *head;

		while (temp != NULL)
		{
			if (temp->data == num)
			{
				++count;
			}

			temp = temp->next;
		}
	}

	return count;
}

static int getNthNodeFromBeg(struct node **head, int nodeNum)
{
	struct node *temp = NULL;
	int result = 0;
	int count = 0;

	if (*head == NULL)
	{
		return 0;
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			++count;

			if (count == nodeNum)
			{
				return (temp->data);
			}

			temp = temp->next;
		}
	}
}

static int getNthNodeFromEnd(struct node **head, int nodeNum)
{
	struct node *temp = NULL;
	int result = 0;
	int count = 0;
	int node = 0;

	if (*head == NULL)
	{
		return 0;
	}

	else
	{
		temp = *head;

		while (temp != NULL)
		{
			temp = temp->next;
			++count;
		}

		printf("\ncount: %d\t nodeNum: %d\n", count, nodeNum);

		temp = *head;
		node = count - nodeNum + 1;
		count = 0;

		while (temp->next != NULL)
		{
			++count;

			if (count == node)
			{
				return (temp->data);
			}

			temp = temp->next;
		}

	}
}

static int searchElement(struct node **head, int element)
{
	struct node *temp = NULL;

	if (*head == NULL)
	{
		return 0;
	}

	else
	{
		temp = *head;
	
		while (temp != NULL)
		{
			if (temp->data == element)
			{
				return 1;
			}
			temp = temp->next;
		}

		if (temp == NULL)
		{
			return 0;
		}
	}
}

static int findLength(struct node **head)
{
	struct node *temp = NULL;
	int length = 0;

	if (*head == NULL)
	{
		/* do nothing */
	}

	else
	{
		temp = *head;

		while (temp != NULL)
		{
			temp = temp->next;
			++length;
		}
	}

	return length;
}

static void deleteListAtGivenPos(struct node **head, int pos)
{
	struct node *temp = NULL;
	struct node *prev = NULL;
	int count = 0;

	if (*head == NULL)
	{
		printf("\nList is empty, nothing can be deleted\n");
	}

	else if (pos == 1)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(*head);
		}
		else
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}

	else
	{
		temp = *head;
		prev = temp;

		while ((temp->next != NULL))
		{
			++count;

			if (count == pos)
			{
				break;
			}	

			temp = temp->next;
		}

		while (prev->next != temp)
		{
			prev = prev->next;
		}

		prev->next = temp->next;
		free(temp);
	}
}

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
	int pos = 0;

	while (1)
	{
		printf("\nPress 1 to insert an element at the start of the linked list\n");
		printf("\nPress 2 to insert an element at the end of the linked list\n");
		printf("\nPress 3 to delete an element from the beginning of the linked list\n");
		printf("\nPress 4 to delete an element from the end of the linked list\n");
		printf("\nPress 5 to delete an element from a given position\n");
		printf("\nPress 6 to find the length of a linked list\n");
		printf("\nPress 7 to search an element in a linked list\n");
		printf("\nPress 8 to get an nth node from the beginning in a linked list\n");
		printf("\nPress 9 to get an nth node from the end in a linked list\n");
		printf("\nPress 10 to display the count of the number of times a given integer occurs in a linked list\n");
		printf("\nPress 11 to swap the elements pair wise in a linked list\n");
		printf("\nPress 12 to display the linked list\n");
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
				printf("\nEnter a position from which a node must be deleted\n");
				scanf("%d", &pos);
				deleteListAtGivenPos(&head, pos);
				break;
			}

			case 6:
			{
				int length = 0;
				length = findLength(&head);

				printf("\nThe length of a linked list is: %d\n", length);
				break;
			}

			case 7:
			{
				int element = 0;
				int result = 0;

				printf("\nEnter an element that needs to be searched\n");
				scanf("%d", &element);

				result = searchElement(&head, element);

				if (result == 1)
				{
					printf("\nThe specified element was found in the linked list\n");
				}
				else if (result == 0)
				{
					printf("\nThe specified element was not found in the linked list\n");
				}

				break;
			}

			case 8:
			{
				int result = 0;

				printf("\nEnter the node number from which the data must be obtained\n");
				scanf("%d", &nodeNum);

				result = getNthNodeFromBeg(&head, nodeNum);

				printf("\nThe result is: %d\n", result);

				break;
			}

			case 9:
			{
				int result = 0;

				printf("\nEnter the node number from which the data must be obtained\n");
				scanf("%d", &nodeNum);

				result = getNthNodeFromEnd(&head, nodeNum);

				printf("\nThe result is: %d\n", result);

				break;
			}

			case 10:
			{
				int num = 0;
				int result = 0;

				printf("\nEnter a number that needs to be searched\n");
				scanf("%d", &num);

				result = countGivenInt(&head, num);

				printf("\nThe number of times a given element occurs in a linked list: %d\n", result);
				break;
			}

			case 11:
			{
				swapPairwise(&head);
				break;
			}

			case 12:
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
