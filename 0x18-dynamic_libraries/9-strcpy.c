#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by 'src' to
 * the buffer pointed to by 'dest'
*/

char *_strcpy(char *dest, char *src)

{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
