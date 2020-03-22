#include <stdio.h>

int main()
{
	char *ptr = "Sumedh Jambekar";
	int length = 0;

	while (*ptr != '\0')
	{
		++length;
		ptr = ptr + 1;
	}
	printf("\nThe length of the string is: %d\n", length);

	return 0;
}
