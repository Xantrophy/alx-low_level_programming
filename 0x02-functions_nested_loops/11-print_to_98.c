#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Check Holberton
 * @n: Number accepted from user
 *
 * Description: Function that adds two integers and returns the result
 * Return: Result to add a and b
 */
void print_to_98(int n)
{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
