#include <stdio.h>
#define MAXCHARS 100

int main()
{
	int c;
	int index;
	char arr[MAXCHARS];

	printf("\nEnter the text that needs to be converted to lower case\n");
	while ((c = getchar()) != EOF)
	{
		arr[index] = c;
		++index;
	}
	printf("\nThe text entered in an array is: %s\n", arr);

	index = 0;
	while (arr[index] != '\0')
	{
		if ((arr[index] >= 'A') && (arr[index] <= 'Z'))
		{
			arr[index] += 'a' - 'A';
		}
		++index;
	}
	printf("\nThe text converted from upper case to lower case is: %s\n", arr);

	return 0;		
}
