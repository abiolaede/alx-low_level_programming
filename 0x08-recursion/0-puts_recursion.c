include "main.h"

/**
 * _puts_recursion - print's a string
 * @s: string to be printed
 *
 * Return: void
 */
void _put_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
