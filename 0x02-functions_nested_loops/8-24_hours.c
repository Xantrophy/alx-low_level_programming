#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Check description
 *
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
