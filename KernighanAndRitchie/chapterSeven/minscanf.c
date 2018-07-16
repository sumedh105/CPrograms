#include <stdio.h>
#include <stdarg.h>

void minscanf(char *fmt, ...);

int main()
{
	int a = 20;

	minscanf("%d", &a);
	printf("\na: %d\n", a);

}//end of main function

void minscanf(char *fmt, ...) {
	va_list vp;
	int *ival;
	double dval;
	char *sval, *p;

	va_start(vp, fmt);
	for (p = fmt; *p; ++p) {
		if (*p != '%')
			continue; //Do nothing
		switch (*++p) {
			case 'd':
				printf("\nI am in this case\n");
				ival = va_arg(vp, int *);
				scanf("%d", ival);
				printf("\nI am in this case and after scanf\n");
				printf("\n%d\n", *ival);
				printf("\nI am in this case and after printf\n");
				break;

			case 'f':
				dval = va_arg(vp, double);
				scanf("%lf", &dval);
				printf("\n%f\n", dval);
				break;

			case 's':
				break;

			default:
				putchar(*p);
				break;
		}//end of switch case
	}//end of for loop	
}//end of minscanf()
