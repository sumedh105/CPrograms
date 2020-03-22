#include <stdio.h>
#define MAXCHARS 100

int main()
{
	char arr[MAXCHARS];
	int index = 0;
	int c;

	printf("\nEnter the string that needs to be converted to lower case\n");
	while ((c = getchar()) != EOF)
	{
		arr[index] = c;
		++index;
	}
	printf("\nThe string entered is: %s\n", arr);

	index = 0;
	while (arr[index] != '\0')
	{
		if ((arr[index] >= 'A') && (arr[index] <= 'Z'))
		{
			arr[index] += 32;
		}

		++index;
	}

	printf("\nThe array converted from upper case to lower case is: %s\n", arr);

	return 0;
}
