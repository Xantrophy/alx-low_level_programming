#include "main.h"

/**
 * _islower - Check description
 * @c: An input character
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
int _islower(int c)
{
int lower = 0;
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
{
lower = 1;
}
}
return (lower);
}
