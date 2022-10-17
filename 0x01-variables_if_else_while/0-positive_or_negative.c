#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* betty style doc for function main goes there */
int main(void)
{
	int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if (n > 0)
		{
			prinf("%d Its positive\n", n);
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
