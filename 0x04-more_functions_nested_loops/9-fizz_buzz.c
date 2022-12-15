#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * 3 multiples print Fizz instead of the number
 * 5 print Buzz instead of numbers
 * 3 & 5 print FizzBuzz
 * Return:Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fuzz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
