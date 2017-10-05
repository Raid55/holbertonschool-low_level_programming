#include "holberton.h"
/**
 * find_last_char - finds last instance of char in string
 * @s: string to search in
 * @i: where to start from
 * @find: what char to find
 * @I: master I, location of last instance or 0 if null
 *
 * Return: 0 if null else last instance of find in s
 */
int find_last_char(char *s, int i, char find, int I)
{
	if (s[i] == find)
		I = i;
	else if (s[i] == '\0')
		return (I);
	return (find_last_char(s, i + 1, find, I));
}
/**
 * helper - helps check for wildcards and others, does all the work
 * @check: string to check
 * @wild: string with wildcards to check against
 * @i: check's increment
 * @I: wilds's increment
 *
 * Return: 1 if true 0 if false
 */
int helper(char *check, char *wild, int i, int I)
{
	if (wild[I] == '*')
	{
		/* if (check[i] == wild[I + 1]) */
		if (wild[I + 1] == '*' ||
				(check[i] == '\0' && wild[I + 1] != '\0'))
			return (helper(check, wild, i, I + 1));
		if (wild[I + 1] == '\0')
			return (1);
		i = find_last_char(check, i, wild[I + 1], 0);
		return (helper(check, wild, i, I + 1));
	}
	if (check[i] == '\0' && wild[I] == '\0')
		return (1);

	if (check[i] == wild[I])
		return (helper(check, wild, i + 1, I + 1));
	return (0);
}
/**
 * wildcmp - checks if s1 and s2 and the same with wildcards
 * @s1: string without wildcards
 * @s2: string with wildcards
 *
 * Return: 1 or 0 depending on yes or no
 */
int wildcmp(char *s1, char *s2)
{
	return (helper(s1, s2, 0, 0));
}
