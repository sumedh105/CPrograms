#include <stdio.h>
#include <stdlib.h>
#define MAXVAL 50

void enqueue(int);
int dequeue();
void display();

int queue[MAXVAL] = {0};
int queueBottom = 0;
int queueTop = 0;

int main()
{
	int choice = 0;
	int num = 0;
	int result = 0;

	while (1)
	{
		printf("\nEnter the choice\n");
		printf("\n1. Enqueue\n");
		printf("\n2. Dequeue\n");
		printf("\n3. Display\n");
		printf("\n4. Exit\n");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				printf("\nEnter the number to be enqueued\n");
				scanf("%d", &num);
				enqueue(num);
				break;

			case 2:
				result = dequeue();
				printf("\nThe dequeued element is: %d\n", result);
				break;

			case 3:
				display();
				break;

			case 4:
				exit(0);	
				break;

			default:
				break;

		}
	}

	return 0;
}

void enqueue(int num)
{
	if (queueTop <= MAXVAL)
	{
		queue[queueTop++] = num;
	}
	else
	{
		printf("\nerror: the queue is full, cannot push the element in a queue\n");
	}
}

int dequeue()
{
	int num;

	if (queueBottom <= queueTop)
	{
		num = queue[queueBottom++];

		return num;
	}
	else
	{
		printf("\nerror: cannot dequeue an element, the queue is empty\n");
	}
}

void display()
{
	int index = 0;
	
	printf("\nThe queue contents are:\n");
	for (index = queueBottom; index < queueTop; ++index)
	{
		printf("\nqueue[%d]: %d\n", index, queue[index]);
	}
}
