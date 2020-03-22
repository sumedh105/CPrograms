#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	int c;
	int index = 0;
	int indexOne = 0;
	char arr[MAXCHARS];
	char character;

	printf("\nEnter the character array\n");
	while ((c = getchar()) != EOF)
	{
		arr[index++] = c;	
	}
	arr[index] = '\0';

	printf("\nThe entered array is: %s\n", arr);

	printf("\nEnter the character that needs to be removed from the string\n");
	scanf("%c", &character);

	index = 0;
	while (arr[index] != '\0')
	{
		printf("\narr[index]: %c\n", arr[index]);
		printf("\ncharacter: %c\n", character);
		if (arr[index] != character)
		{
			printf("\nI am in\n");
			arr[indexOne++] = arr[index];
		}
		++index;
	}
	arr[indexOne] = '\0';

	printf("\nThe final array obtained is: %s\n", arr);

	return 0;
}
