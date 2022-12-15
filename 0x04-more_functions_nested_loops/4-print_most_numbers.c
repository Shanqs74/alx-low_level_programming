#include "main.h"

/**
 * main - print most numbers
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_purchar(c);
	}
	_putchar('\n');
}
