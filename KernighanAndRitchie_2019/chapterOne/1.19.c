#include <stdio.h>
#define MAXLINE 100

int main()
{
	int c;
	int index = 0;
	int indexOne = 0;
	char arr[MAXLINE];

	while ((c = getchar()) != EOF)
	{
		arr[index++] = c;
	}
	arr[--index] = '\0';
	printf("\nThe array entered is: %s\n", arr);

	index = 0;

	while(arr[indexOne] != '\0')
	{
		indexOne++;
	}
	indexOne -= 1;

	printf("\nindex: %d\t indexOne: %d\n", index, indexOne);

	while (index < indexOne)
	{
		c = arr[index];
		arr[index] = arr[indexOne];
		arr[indexOne] = c;

		++index;
		--indexOne;
	}

	printf("\nThe reversed string is: %s\n", arr);

	return 0;
}
