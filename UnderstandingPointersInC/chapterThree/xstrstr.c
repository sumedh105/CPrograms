#include <stdio.h>
#define MAXCHAR 100

char *xstrstr(char *, char *);

int main()
{
	char str[MAXCHAR];
	char substr[MAXCHAR];
	char *ptr;

	printf("\nEnter the string from which the substring needs to be searched\n");
	scanf("%s", str);
	printf("\nThe string entered is: %s\n", str);

	printf("\nEnter the sub string that needs to be searched from the main string\n");
	scanf("%s", substr);
	printf("\nThe substring entered is: %s\n", substr);

	ptr = xstrstr(str, substr);

	if (ptr == NULL)
	{
		printf("\nSubstring is not present in the string\n");
	}
	else
	{
		printf("\nSubstring is present in the string and the address is: %p\n", ptr);
	}

	return 0;
}

char *xstrstr(char *string, char *substring)
{
	char *p, *q;
	int flag = 0;
	int stringLength = 0;
	int index = 0;

	q = substring;
	while (*substring != '\0')
	{
		++stringLength;
		++substring;
	}
	substring = q;

	while (*string != '\0')
	{
		p = string;
		q = substring;
		while ((index < stringLength) && (*q != '\0'))
		{
			if (*string == *q)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}

			++index;
			++string;
			++q;
		}

		if ((flag == 1) && (index == stringLength) && (*q == '\0'))
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}

		index = 0;
		++string;
	}

	if (flag == 1)
	{
		return p;
	}
	else
	{
		return NULL;
	}
}
