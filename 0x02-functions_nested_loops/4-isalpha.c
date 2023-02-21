#include "main.h"

/**
 * _isalpha - Check description
 * @c: An input character
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
int _isalpha(int c)
{
int lower = 0;
char i;
for (i = 'a'; i <= 'Z'; i++)
{
if (i == c)
{
lower = 1;
}
}
return (lower);
}
