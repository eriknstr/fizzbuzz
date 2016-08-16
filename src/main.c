#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
	for (int i = 1 ; i <= 100 ; i++)
	{
		bool m = false;

		if (i % 3 == 0)
		{
			printf("Fizz");
			m = true;
		}

		if (i % 5 == 0)
		{
			printf("Buzz");
			m = true;
		}

		if (!m)
		{
			printf("%d", i);
		}

		printf("\n");
	}

	return EXIT_SUCCESS;
}
