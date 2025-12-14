#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize first character if it's a lowercase letter */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 'a' - 'A';
	i++;

	while (str[i] != '\0')
	{
		/* Check if previous character is a separator */
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		    str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		    str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		    str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		    str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 'a' - 'A';
		}
		i++;
	}

	return (str);
}
