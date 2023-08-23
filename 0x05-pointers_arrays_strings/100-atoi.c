
/**
 * _atoi - converts a string to int
 * @s: string to convert
 *
 * Return: the signed int.
 */
int _atoi(char *s)
{
	unsigned int n;
	int i, sign;

	n = 0;
	i = 0;
	sign = 1;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (n > 0)
		{
			break;
		}

		i++;
	}
	return (sign * n);
}
