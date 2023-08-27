#include "main.h"
#include<stdio.h>

int main(void)
{
	char s[3] = "ho";
	char a[6] = "ok";
	char *dest = _strcat(s, a);

	printf("%s", dest);

	return (0);
}
