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
char j;
for (i = 'a'; i <= 'z'; i++)
{
for (j = 'A'; j <= 'Z' ; j++)
{
if (i == c || j == c)
{
lower = 1;
}
}
}
return (lower);
}
