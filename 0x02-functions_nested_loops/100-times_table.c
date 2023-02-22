#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Check Holberton
 * @n: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
void print_times_table(int n)
{
int i;
int j;
for (i = 1 ; i <= n + 1 ; i++)
{
printf("%d,   ", 0);
}
printf("%c", '\n');
for (i = 1 ; i <= n ; i++)
{
for (j = 0 ; j <= i * n ; j += i)
{
putformat(j);
if (n < 0 || n > 15)
{
break;
}
}
printf("%c", '\n');
}
}
/**
 * putformat - formatted characters to output
 * @n: number to format
 * Return: nothing
 */
void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
