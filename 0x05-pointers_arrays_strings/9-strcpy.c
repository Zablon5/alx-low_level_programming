#include "main.h"
/**
* _strcpy-copies the string pointed to by src, including the
* terminating null byte (\0), to the buffer pointed to by dest
* @dest:reference to destination string
* @src:reference to a string that is going to be copied
* Return:dest
*/
char *_strcpy(char *dest, char *src)
{
int len = 0, j = 0;
while (src[len] != '\0')
{
len++;
}
while (j < len)
{
dest[j] = src[j];
j++;
}
dest[j + 1] = '\0';
return (dest);
}
