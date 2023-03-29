#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: the string to convert
 * Return: s
 */

int _atoi(char *s)
{
	int i = 0;
    	int c = 0;
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
    	return sidn*c;
}
/*	int i, m, n, o;

	i = n = 0;
	o = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			o *= -1;
		i++;
	}
	m = 1;
	while ((*(s + m) >= '0') && (*(s + m) <= '9'))
	{
		n = n * 10 + o * (*(s + m) - '0');
		m++;
	}
	return (n);
}
*/
