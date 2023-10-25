/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length;

	length = find_string_length(s);

	if (length == 0)
		return (1);
	return (check_palindrome(s, 0, length - 1));
}

/**
 * find_string_length - Calculate the length of a string.
 * @s: The input string to find the length of.
 *
 * Return: The length of the string.
 */
int find_string_length(char *s)
{
	if (*s != '\0')
		return (1 + find_string_length(s + 1));
	return (0);
}

/**
 * check_palindrome - Recursively check if the string is a palindrome.
 * @str: The string to check.
 * @start: The starting index (usually 0).
 * @end: The ending index, obtained from is_palindrome (length - 1).
 *
 * Return: 1 if str is a palindrome, 0 otherwise.
 */
int check_palindrome(char str[], int start, int end)
{
	if (start >= end)
		return (1);
	if (str[start] != str[end])
		return (0);
	if (start <= end || start < end + 1)
	return (check_palindrome(str, start + 1, end - 1));
	return (1);
}

