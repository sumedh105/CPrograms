#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int data;
	struct stack *next;
};

static void push(struct stack **head, int data)
{
	struct stack *cur = NULL;
	struct stack *temp = *head;

	cur = (struct stack *)malloc(sizeof(struct stack));
	cur->data = data;
	cur->next = NULL;

	if (*head == NULL)
	{
		*head = cur;
	}
	else if ((*head)->next == NULL)
	{
		(*head)->next = cur;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = cur;
	}
}

static int pop(struct stack **head)
{
	struct stack *temp = *head;
	struct stack *prev = temp;
	int data = 0;

	if (*head == NULL)
	{
		printf("\nStack underflow, nothing can be popped from the stack\n");
	}

	else
	{
		while (temp->next != NULL)
		{
			prev->next = temp;
			temp = temp->next;
		}

		data = temp->data;
		prev->next = NULL;
		free(temp);
	}

	return data;
}

static void display(struct stack *head)
{
	struct stack *temp = head;

	if (head == NULL)
	{
		printf("\nStack underflow, nothing can be displayed\n");
	}
	else
	{
		while (temp != NULL)
		{
			printf("\n%d\n", temp->data);
			temp = temp->next;
		}	
	}
}

static void reverse(struct stack **head)
{
	struct stack *temp = NULL;
	struct stack *prev = NULL;
	struct stack *cur = *head;
	struct stack *next = cur->next;

	while (next != NULL)
	{
		cur->next = prev;
		prev = cur;
		cur = next;
		next = cur->next;
	}

	cur->next = prev;
	*head = cur;
}

int main()
{
	int choice = 0;
	struct stack *head = NULL;

	while (1)
	{
		printf("\nEnter 0 to exit the stack\n");
		printf("\nEnter 1 to push an element into the stack\n");
		printf("\nEnter 2 to pop an element into the stack\n");
		printf("\nEnter 3 to display the stack\n");
		printf("\nEnter 4 to reverse the stack\n");

		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0:
			{
				exit(1);
			}

			case 1:
			{
				int data = 0;

				printf("\nEnter the data to push into the stack\n");
				scanf("%d", &data);
				push(&head, data);

				break;
			}

			case 2:
			{
				int data = 0;

				data = pop(&head);
				printf("\nThe data popped from the stack is: %d\n", data);

				break;
			}

			case 3:
			{
				display(head);

				break;
			}

			case 4:
			{
				reverse(&head);

				break;
			}
		}
	}

	return 0;
}
