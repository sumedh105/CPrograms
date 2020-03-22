#include <stdio.h>
#define MAXSIZE 100

void intToAscii(int, char *);
void reverse(char *);

int main()
{
	int num;
	char strOne[MAXSIZE];

	printf("\nEnter the number that should be converted to ascii\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	intToAscii(num, strOne);

	printf("\nThe string obtained after converting from integer to ascii is: %s\n", strOne);

	return 0;
}

void intToAscii(int num, char *p)
{
	int length = 0;

	while (num > 0)
	{
		printf("\n__LINE__: %d\n", __LINE__);
		*p = ((num % 10)) + '0';
		printf("\n__LINE__: %d\n", __LINE__);
		p++;
		++length;
		num = (num / 10);
		printf("\nnum: %d\n", num);
	}
	*p = '\0';

	p = (p - length);

	printf("\nThe string after converteing from int to ascii is: %s\n", p);

	reverse(p);

	printf("\nThe string after reversing is: %s\n", p);
}

void reverse(char *s)
{
	char temp;
	char *p;

	p = s;

	while (*(p + 1) != '\0')
	{
		p++;
	}

	while (s < p)
	{
		temp = *s;
		*s = *p;
		*p = temp;

		s++;
		p--;	
	}
}
