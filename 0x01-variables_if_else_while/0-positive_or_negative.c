#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints if the number is positive,nagative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if (n > 0)
		{
			printf("%d Its positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d Its zero\n", n);
		}
		else
		{
			printf("%d Its negative\n", n);
		}

		return (0);
}
