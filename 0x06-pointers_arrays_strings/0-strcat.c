#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0, i;

    /* Get the length of the destination string. */
    while (dest[dest_len] != '\0')
        dest_len++;

    /* Copy up to n bytes from src to the end of dest. */
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    /* Null-terminate the resulting string. */
    dest[dest_len + i] = '\0';

    return dest;
}

