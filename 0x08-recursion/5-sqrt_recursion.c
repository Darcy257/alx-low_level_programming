#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * @n: input
 * Return: te resulting square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_recursion(n, 0));
}
