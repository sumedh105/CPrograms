#include <stdio.h>
#define MAXNUM 100

int main()
{
	char arr[MAXNUM];
	int index = 0;
	int num = 0;
	int result = 0;

	printf("\nEnter the number of numbers that needs to be entered\n");
	scanf("%d", &num);

	printf("\nEnter the digits in the character array\n");
	scanf("%s", arr);
	printf("\nThe array is : %s\n", arr);

	for (index = 0; index < num; ++index)
	{
		result = (result * 10) + (arr[index] - '0');
	}

	printf("\nThe converted ascii to integer value is: %d\n", result);

	return 0;
}

