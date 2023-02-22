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
for (i = 0 ; i < n ; i++)
{
for (j < n ; j < i * n ; j += i)
{
printf("%d, ", j);
if (n < 0 || n > 15)
{
break;
}
}
_putchar('\n');
}
}
