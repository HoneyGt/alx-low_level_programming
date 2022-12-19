#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int c;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (c = longi; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
