#include <stdio.h>

/**
 * main - print lower and uppercase alphabet
 *
 * Return: always 0 for success
 */

int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
	putchar(i);
for (i = 'A' ; i <= 'Z' ; i++)
	putchar(i);
putchar('\n');
return (0);
}
