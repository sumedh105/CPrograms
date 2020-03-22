#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	int indexOne = 0;
	int indexTwo = 0;
	char s1[MAXCHARS];
	char s2[MAXCHARS];

	printf("\nEnter the two strings\n");
	scanf("%s", s1);
	scanf("%s", s2);
	printf("\nThe two strings entered are: %s and %s\n", s1, s2);

	for (indexOne = 0; s1[indexOne] != '\0'; ++indexOne)
	{
		for (indexTwo = 0; s2[indexTwo] != '\0'; ++indexTwo)
		{
			if (s1[indexOne] == s2[indexTwo])
			{
				printf("\nThe character is: %c and the first location in s1: %d\n", s2[indexTwo], indexOne);
			}
		}
	}

	return 0;
}
