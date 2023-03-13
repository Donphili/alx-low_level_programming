#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* argstostr - Concatenate arguments.
* @ac: argument count.
* @av: argument vector.
*
* Return: address to new string or null on failure
*/

char *argstostr(int ac, char **av)
{
char *s;

s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}
