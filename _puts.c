#include "main.h"

/**
 * _puts - prints a string
 * @s - string
 *
 * Return: void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
}

