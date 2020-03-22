#include <stdio.h>
#include <stdarg.h>

void minprintf(char *fmt, ...);

int main()
{
	
	minprintf("The no is: %d", 10);
	minprintf("The no is: %f", 10.20);
	minprintf("The string is: %s", "Sumedh W. Jambekar");

	return 0;
}

void minprintf(char *fmt, ...)
{
	va_list ap;
	char *sval, *p;
	int ival;
	double dval;

	va_start(ap, fmt);
	for (p = fmt; *p; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			continue;
		}
		switch(*++p)
		{
			case 'd':
			case 'i':
				ival = va_arg(ap, int);
				printf("\n%d\n", ival);
				break;

			case 'f':
				dval = va_arg(ap, double);
				printf("\n%f\n", dval);
				break;

			case 's':
				for (sval = va_arg(ap, char *); *sval; sval++)
				{
					putchar(*sval);
				}
				break;
			default:
				putchar(*p);
				break;
		}
	}
	va_end(ap);
}

