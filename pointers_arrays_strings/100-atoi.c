#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, started = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			/* check overflow before adding digit */
			if (result > (INT_MAX - (s[i] - '0')) / 10)
				return (sign == 1 ? INT_MAX : INT_MIN);
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}
	return (result * sign);
}
