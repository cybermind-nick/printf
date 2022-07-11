#include "main.h"

/**
 * _putchar - prints a character to STDOUT
 * @c: char
 *
 * Return: int (success or failure)
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
