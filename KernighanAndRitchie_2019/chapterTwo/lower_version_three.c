#include <stdio.h>
#define MAXCHARS 100

int main()
{
	int c;
	char arr[MAXCHARS];
	int index = 0;

	printf("\nEnter the text that needs to be converted to lower case\n");
	while ((c = getchar()) != EOF)
	{
		arr[index] = c;
		++index;
	}
	printf("\nThe text entered is: %s\n");

	index = 0;
	while (arr[index] != '\0')
	{
		if ((arr[index] >= 'A') && (arr[index] <= 'Z'))
		{
			arr[index] |= 32;
		}
		++index;
	}
	printf("\nThe converted array is: %s\n", arr);

	return 0;
}
