#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: the string to convert
 * Return: s
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int c = 0;
	int sidn = 1;

	while (s[i])
	{
		if (s[i] == 43)
			sidn *= 1;
		else if (s[i] == 45)
			sidn *= -1;
		if (s[i] >= 48 && s[i] <= 57)
		{
			c = c * 10 + (s[i] - 48);
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
		i++;
	}
	return (sidn * c);
}
