#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	int c;
	int index = 0;
	int indexTwo = 0;
	char s[MAXCHARS];
	char t[MAXCHARS];

	while ((c = getchar()) != EOF) {
		t[index] = c;	
		++index;
	}//end of while loop
	t[index] = '\0';
	printf("\nThe entered string: %s\n", t);

	index = 0;
	while (t[index] != '\0') {
		switch (t[index]) {
			case '\n':
				printf("\nI am in first case \n");
				s[indexTwo] = '\\';
				++indexTwo;
				s[indexTwo] = 'n';
				break;
			case '\t':
				printf("\nI am in second case \n");
				s[indexTwo] = '\\';
				++indexTwo;
				s[indexTwo] = 't';
				break;
			default:
				s[indexTwo] = t[index];
				break;
		}//end of switch case
		++index;
		++indexTwo;
	}//end of while loop
	s[indexTwo] = '\0';

	printf("\nThe string s is: %s\n", s);

	return 0;
}//end of main function
