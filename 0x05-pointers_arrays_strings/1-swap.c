
/**
 * swap_int - a simple one
 * @a: an address of int
 * @b: an address of int
 *
 * Return: nothing
 *
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;

}
