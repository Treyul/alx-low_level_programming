#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *  Return: 0 - success
 *
 */

int main(void)
{
	srand(time(0));
	int n = rand();
	int last = n % 10;

	printf("Last digit of %d is %d ", n, last);
	if (last > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last == 0)
	{
		printf("and is 0\n");
	}
	else if (last < 6 && last != 0)
	{
		printf("and is less tham 6 and not 0\n");
	}
	return (0);
}
