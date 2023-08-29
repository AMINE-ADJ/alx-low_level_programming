/**
 * _memset - memset manually
 * @s: a buffer
 * @b: value to fill our buffer with
 * @n: nbr of bytes in our buffer that we want to fill
 *
 * Return: buffer, address of its first byte in our case
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
