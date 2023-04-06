#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: input
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
int longit = 0;
{
longit++;
longit += _strlen_recursion(s  + 1);
}
return (longit);
}
