#include <stdio.h>

char *monthName(int n);

int main()
{
	int n;
	char *p = NULL;

	printf("\nEnter the month number whose name has to b e retrieved\n");
	scanf("%d", &n);

	p = monthName(n);

	printf("\nThe month name is: %s\n", p);

	return 0;
}

char *monthName(int n)
{
	static char *name[] = 
	{"Illegal month", "January", "February", "March", "April", "May", "June",
	"July", "August", "September", "October", "November", "December"};

	return (n < 1) || (n > 12) ? name[0] : name[n];
}
