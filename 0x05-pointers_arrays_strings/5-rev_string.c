#include "main.h"

/**
 * puts_half - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 * Return: Nothing
 */
void puts_half(char *str)
{
    int len = 0;
    int i = 0;
    while (str[len] != '\0')
        len++;
    while (i > (len / 2) && i <= len)
        _putchar(s[i]);
    _putchar('\n');
}
