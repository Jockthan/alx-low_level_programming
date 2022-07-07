#include "main.h"

/**
 * print_diagonal - print diagonal (_) n number of times
 * @n: integer variable
 *
 * Created by: Jonah Jockthan
 * cc: 7th july, 2022
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
