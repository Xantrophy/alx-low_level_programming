#include <stdio.h>

/**
 * main - check the code
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: nothing.
 */
void print_alphabet(void)
{
int i;
for (i = 'a' ; i <= 'z' ; i++)
{
putchar(i);
}
putchar('\n');
}
