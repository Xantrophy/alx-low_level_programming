#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (putchar(x) < 9)
{
putchar(',');
putchar(' ');
}
else
{
break;
}
}
putchar('\n');
return (0);
}
