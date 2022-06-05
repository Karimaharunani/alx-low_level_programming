#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
=======
/* more headers goes there */

/**
 * main - The main entry point
 *
 * Return: 0 which succeful
 */
int main(void)
{
	int n, lstdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lstdgt = n % 10;

	printf("Last digit of %d is ", n);

	if (lstdgt > 5)

		printf("%d and is greater than 5\n", lstdgt);

	else if (lstdgt == 0)

		printf("%d and is 0\n", lstdgt);

	else if (lstdgt < 6 && lstdgt != 0)

		printf("%d and is less than 6 and not 0\n", lstdgt);

>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
	return (0);
}
