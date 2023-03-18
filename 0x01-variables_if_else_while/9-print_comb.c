#include <stdio.h>

/**
 * main - print digits from 0 to 9
 *
 * Return: always 0
 */

int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
	putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
}
putchar('\n');
return (0);
}
