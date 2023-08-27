/**
 * cap_string - simple one
 * @s: a string
 * description: capitilize every word in a string s...
 *
 * Return: s modified
 */
char *cap_string(char *s)
{
	char sep[] = {32, 9, '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};
	int i, first = 0;
	int len = 1;

	if (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}

	while (*s)
	{
		i = 0;
		while (i < 13)
		{
			if (sep[i] == *(s - 1))
				first = 1;
			i++;
		}
		if (first && *s >= 'a' && *s <= 'z')
		{
			*s -= 32;
			first = 0;
		}
		else
		{
			first = 0;
		}
		s++;
		len++;
	}

	return (s - len);
}
