#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
=======
/* more headers goes there */

/**
 * main - The main entry point
 *
 * Return: 0 when successful
>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

=======
	/* your code goes there */
	if (n > 0)

		printf("%d is positive\n", n);


	else if (n < 0)

		printf("%d is negative\n", n);


	else

		printf("%d is zero\n", n);

	return (0);
}
>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
