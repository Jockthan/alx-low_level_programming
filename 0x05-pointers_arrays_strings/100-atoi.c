#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
*_atoi - coverts a string to integer
*@str: pointer to string to be converted
*Return: converted string
*Created by: Jonah Jockthan
*cc: 12th july, 2022.
*/

int _atoi(char *str)
{
	int sign = 1, base = 0, i = 0;

	while (str[i] == ' ')
	{
		i++;
	}

	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		if (base > INT_MAX / 10	|| (base == INT_MAX / 10 && str[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		base = 10 * base + (str[i++] - '0');
	}
	return (base * sign);
}
