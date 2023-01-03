#include "main.h"

/**
 * _strcmp - compare 2 string
 * @s1: first string
 * @s2: second string 
 * Return
 *         returns zero if s1 == s2
 *         returns negative number if s1 < s2
 *         returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
	return (0);
	}
	if (*s1 == *s2)
	{
	return (0);
	}

	else
	{
	return (*s1 - *s2);
	}
}
	else
	{

	return (*s1 - *s2);
	}
}
