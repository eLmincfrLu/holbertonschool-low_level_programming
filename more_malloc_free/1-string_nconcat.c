#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings, taking at most n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to take from s2
 *
 * Return: pointer to newly allocated concatenated string, or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int len1 = 0, len2 = 0;

    if (s1 != NULL)
        len1 = strlen(s1);
    if (s2 != NULL)
        len2 = strlen(s2);

    if (n > len2)
        n = len2;

    new_str = malloc(len1 + n + 1); /* +1 for null terminator */
    if (new_str == NULL)
        return NULL;

    /* Copy s1 */
    if (s1 != NULL)
        memcpy(new_str, s1, len1);

    /* Copy first n bytes of s2 */
    if (s2 != NULL)
        memcpy(new_str + len1, s2, n);

    new_str[len1 + n] = '\0'; /* null terminate */

    return new_str;
}
