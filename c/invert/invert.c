/*
 invert a string using recursion
*/

#include <stdio.h>
#include <string.h>

int invert(char *buf, int len)
{
	char tmp;

	if (!buf || len < 0) {
		return -1;
	}

	if (len < 2) {
		return 0;
	}

	tmp = *buf;
	*buf = *(buf + len -1);
	*(buf + len -1) = tmp;

	return invert(buf+1, len-2);
}

int main(int args, char **argv)
{
	char str[] = "abcdefgh";

	printf("str = %s\n", str);
	invert(str, strlen(str));
	printf("res = %s\n", str);
}
