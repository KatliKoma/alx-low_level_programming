/**
 * _strspn -gets the length of a prefix substring.
 * @s: The null-terminated string to be examined.
 * @accept:The string containing characters to match in the prefix of 's'.
 * Return:number of bytes in the initial segment of 's'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_matching = 1;

	while (*s && is_matching)
	{
		is_matching = 0;
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				is_matching = 1;
				break;
			}
		}

		if (is_matching)
		{
			count++;
			s++;
		}
	}

	return (count);
}

