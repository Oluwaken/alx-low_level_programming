#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry pooint
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar((d % 10) + '0');
		if(d == '9')
			continue;
		
			putchar(',');
			putchar(' ');
		
	}
	putchar('\n');
	
	return (0);
}
