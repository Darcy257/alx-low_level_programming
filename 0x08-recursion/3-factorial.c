#include "main.h"

/**
 * factorial - Entry point
 * @n: input
 * Return: always 0
 */

int factorial(int n)
{
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
