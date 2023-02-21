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
xprintf("%d", n);
}
else if (n == 0)
{
x = printf("%d", n);
}
else if (n < 0)
{
y = n * -1;
x = printf("%d", y);
}
return (x);
}
