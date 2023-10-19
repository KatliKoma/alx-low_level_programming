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

	while (words[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (words[i] == leet[j] || words[i] == (leet[j] + 32))
			{
				words[i] = j + '0';
			}
		}
		i++;
	}
	return (words);
}

