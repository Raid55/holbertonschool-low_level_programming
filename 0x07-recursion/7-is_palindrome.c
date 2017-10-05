#include "holberton.h"
/**
 * _strlen_recursion - returns len of string
 * @s: string to be put in reverse
 *
 * Return: integer
 *
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * helper - helps is_palindrome with recursion
 * @start: starting point of s
 * @end: ending of s
 * @s: string to palindrominize
 *
 * Return: 1 or 0
 */
int helper(int start, int end, char *s)
{
	if (end == 0)
		return (1);
	if (start > end)
		return (1);
	if (s[start] == s[end])
		return (helper(start + 1, end - 1, s));
	else
		return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int end = _strlen_recursion(s);

	if (end == 0)
		return (0);
	return (helper(0, end - 1, s));
}
