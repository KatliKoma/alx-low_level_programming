/**
 * _memset - copies memory area.
 * @s:pointer to memory area.
 * @b:constant byte
 * @n: number of bytes
 * Return:A pointer to the memory area 's' is returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

