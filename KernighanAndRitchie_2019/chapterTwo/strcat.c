#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	char arrOne[MAXCHARS];
	char arrTwo[MAXCHARS];
	int indexOne = 0;
	int indexTwo = 0;

	printf("\nEnter the two strings that needs to be concatenated\n");
	scanf("%s", arrOne);
	scanf("%s", arrTwo);
	printf("\nThe two strings entered are: %s and %s\n", arrOne, arrTwo);

	while (arrOne[indexOne] != '\0')
	{
		++indexOne;
	}

	while (arrTwo[indexTwo] != '\0')
	{
		arrOne[indexOne++] = arrTwo[indexTwo++];
	}

	printf("\nThe concatenated array is: %s\n", arrOne);

	return 0;
}
