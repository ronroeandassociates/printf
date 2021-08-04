#include <stdlib.h>
#include "holberton.h"

/**
 * get_flags - extract flags after % into a string
 * @s: string to extract from
 * @pos: position to start searching from (will be modified to mark
 * end of searching position)
 *
 * Return: string containing all the flags found
 */
char *get_flags(const char *s, unsigned int *pos)
{
        char *flags_arr = "-+ 0#";
        char *res_flags = NULL;
        unsigned int i, found;
        size_t size = 1;

        do {
                found = 0;
                i = 0;
                while (flags_arr[i] && !found)
                {
                if (s[(*pos) + 1] == flags_arr[i])
                {
                size += sizeof(char);
                res_flags = realloc(res_flags, size - sizeof(char), size);
                if (res_flags == NULL)
                {
                        free(res_flags);
                        return (NULL);
                }
                res_flags[size - 2] = s[(*pos) + 1];
                found = 1;
                (*pos)++;
        }
                i++;
        }
        } while (found);
        if (res_flags != NULL)
                res_flags[size - 1] = '\0';
        return (res_flags);
}
