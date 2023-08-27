#include "main.h"
#include<stdio.h>

int main(void)
{
	char s[3] = "ho";
	char a[6] = "oksat";
	char *dest = _strncpy(s, a, 2);

	printf("%s", dest);

	return (0);
}
