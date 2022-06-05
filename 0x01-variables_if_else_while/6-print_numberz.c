<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	putchar(10);
=======
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - The main entry point.
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int lwcase[12];
	int i;
	int num;

	int putchar(int lwcase);

	lwcase[10] = 10;

	lwcase[11] = '\0';

	num = '0';

	for (i = 0; i <= 10; i++)
	{
		if (i < 10)
			lwcase[i] = num + i;

		putchar(lwcase[i]);
	}

>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
	return (0);
}
