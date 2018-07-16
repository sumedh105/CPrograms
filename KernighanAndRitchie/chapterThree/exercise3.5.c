#include <stdio.h>
#include <string.h>
#define MAXCHARS 1000

void intToAscii(int, char [], int);
void reverseString(char []);

int main()
{
	char str[MAXCHARS];
	int index = 0;
	int num;
	int strLen = 0;
	int base = 0;

	printf("\nEnter a number that needs to be converted to the binary number in a string\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	printf("\nEnter the base\n");
	scanf("%d", &base);
	printf("\nThe base entered is: %d\n", base);

	intToAscii(num, str, base);
	printf("\nThe string obtained before reversing is: %s\n", str);

	reverseString(str);
	printf("\nThe resulting string is: %s\n", str);
	
	return 0;
}//end of main function

void intToAscii(int num, char str[], int base) {
	int index = 0;
	int mod = 0;

	switch (base) {
		case 2:
		case 8:
			while (num > 0) {
				str[index] = (num % base) + '0';
				num = num / base;
				++index;
			}//end of while loop
			break;

		case 16:
			printf("\nI am in case 16\n");
			while (num > 0) {
				mod = (num % base);
				printf("\nmod is: %d\n", mod);
				switch (mod) {
					case 10:
						printf("\nI am in case 10\n");
						str[index] = 'A';
						break;
					case 11:
						str[index] = 'B';
						break;
					case 12:
						str[index] = 'C';
						break;
					case 13:
						str[index] = 'D';
						break;
					case 14:
						str[index] = 'E';
						break;
					case 15:
						str[index] = 'F';
						break;
					default:
						str[index] = mod + '0';
				}//end of switch case
				num = num / base;
				++index;
			}//end of while loop	
			break;

		default:
			printf("\nI am in default ase\n");
			break;
	}//end of switch case	

	str[index] = '\0';
}//end of intToAscii() function

void reverseString(char str[]) {
	char c;
	int index = 0;
	int indexTwo = 0;

	indexTwo = strlen(str);
	printf("\nThe length of the string is: %d\n", indexTwo);

	indexTwo = indexTwo - 1;

	while (index < indexTwo) {
		c = str[indexTwo];
		str[indexTwo] = str[index];
		str[index] = c;

		++index;
		--indexTwo;
	}//end of while loop	
}//end of reverseString() function
