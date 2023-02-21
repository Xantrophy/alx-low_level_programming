#include "main.h"
#include <stdio.h>
/**
 * print_sign - Check description
 * @n: An input character
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
int print_sign(int n)
{
int x;
if (n > 0)
{
printf("%c", '+');
x = 1;
}
else if (n == 0)
{
printf("%d", 0);
x = 0;
}
else if (n < 0)
{
printf("%c", '-');
x = -1;
}
return (x);
}
