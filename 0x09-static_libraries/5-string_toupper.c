/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @words: letters to be changed
 *
 * Return: the string
 */
char *string_toupper(char *words)
{
	int i = 0;

	while (words[i++])
	{
		if (words[i] >= 'a' && words[i] <= 'z')
		{
			words[i] -= 32;
		}
	}

	return (words);
}
