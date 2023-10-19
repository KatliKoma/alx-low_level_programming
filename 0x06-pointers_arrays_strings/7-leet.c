/**
 * leet - encodes a string into 1337
 * @words: string input
 *
 * Return: returns string
 */
char *leet(char *words)
{
	int i = 0, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	if (words[0] != '\0')
	{
		do
		{
			for (j = 0; j <= 7; j++)
			{
				if (words[i] == leet[j] || words[i] - 32 == leet[j])
				{
					words[i] = j + '0';
				}
			}
		}
		while (words[++i] != '\0');
	}
	return words;
}

