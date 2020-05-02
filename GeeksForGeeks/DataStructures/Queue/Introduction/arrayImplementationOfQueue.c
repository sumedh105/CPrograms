#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 10

int queue[MAXNUM];
int front;
int rear;

static void enqueue(int data);
static int dequeue();
static void display();

int main()
{
	int choice = 0;
	int data = 0;

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to enqueue\n");
		printf("\nEnter 2 to dequeue\n");
		printf("\nEnter 3 to display the queue\n");

		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0:
				exit(1);
			case 1:
				printf("\nEnter the data that needs to be enqueued\n");
				scanf("%d", &data);
				enqueue(data);
				break;
			case 2:
				data = dequeue();
				printf("\nThe dequeued data is: %d\n", data);
				break;
			case 3:
				display();
				break;
			default:
				break;
		}
	}

	return 0;
}

static void enqueue(int data)
{
	if ((rear - front + 1) == MAXNUM)
	{
		printf("\nQueue is full, nothing can be added to the queue\n");
	}
	else
	{
		queue[rear++] = data;
	}
}

static int dequeue()
{
	int data = 0;

	if (front == rear)
	{
		printf("\nQueue is empty, nothing can be removed from the queue\n");
		data = -1;
	}
	else
	{
		data = queue[front++];
	}
}

static void display()
{
	int index = 0;

	for (index = front; index < rear; ++index)
	{
		printf("\n%d\n", queue[index]);
	}
}
