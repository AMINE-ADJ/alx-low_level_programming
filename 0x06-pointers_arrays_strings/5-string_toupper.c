/**
 * string_toupper - turn all lowercase letters uppercase
 * @s: string
 *
 * Return: s modified.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
		i++;
	}
	return (s - i);
}
