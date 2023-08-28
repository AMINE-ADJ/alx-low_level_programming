/**
 * leet - make it leetspeak
 * @s: string to modify
 *
 * Return: s modified
 */
char *leet(char *s)
{
	char *p = s;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{

		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*s == key[i] || *s == key[i] + 32)
				*s = value[i] + 48;
		}
		s++;

	}
	return (p);
}
