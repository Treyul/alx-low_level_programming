#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *  Return: 0 - success
 *
 */

int main(void)
{
	int n = rand();
	printf("Last digit of %d\n is %s", n, typeof(n));
	return (0);
}
