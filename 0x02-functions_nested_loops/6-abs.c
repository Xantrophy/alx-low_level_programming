#include "main.h"
#include <stdio.h>
/**
 * _abs(int) - Check description
 * @n: An input character
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
int _abs(int n)
{
int y;
int x;
if (n > 0)
{
printf("%d", n);
x = 1;
}
else if (n == 0)
{
printf("%d", n);
x = 0;
}
else if (n < 0)
{
y = n * -1;
printf("%d", y);
x = -1;
}
return (x);
}
