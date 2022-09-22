
#include "main.h"

#include <stdio.h>


/**
 * main - concatenate the srings
 *@dest: copy to
 *@src: copy from
 *
 * Return: Always 0

char *_strcat(char *dest, char *src)
{
	char s1[4] = src;
	char s2[5] = dest;
	char *ptr;

printf("%s\n", s1);
printf("%s", s2);
ptr = _strcat(s1, s2);
printf("%s", s1);
printf("%s", s2);
printf("%s", ptr);

return (0);
}
