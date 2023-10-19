/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string of letters
 *
 * Return: the string
 */
char *string_toupper(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}

