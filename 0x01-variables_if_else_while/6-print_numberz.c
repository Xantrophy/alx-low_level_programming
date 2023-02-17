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
signed char letter;
for (letter = 0; letter <= 9; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
