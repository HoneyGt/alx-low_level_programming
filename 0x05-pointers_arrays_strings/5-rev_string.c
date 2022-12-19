#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int f;

	while (s[counter] != 0)
		counter++;
	for (f = 0; f < counter; f++)
	{
		counter--;
		rev = s[f];
		s[f] = s[counter];
		s[counter] = rev;
	}
}
