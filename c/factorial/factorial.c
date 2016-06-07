/*
   factorial implementation
*/
#include <stdio.h>

int factorial(unsigned int i)
{
	if (i < 1) {
		return 1;
	}

	return i * factorial(i - 1);
}

int main(int args, char **argv)
{
	int max = 10;
	int i = 0;

	while (max--) {
		printf("%3d! = %10d\n", i, factorial(i));
		i++;
	}
}
