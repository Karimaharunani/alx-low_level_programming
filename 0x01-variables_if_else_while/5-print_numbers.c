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
		printf("%d", i);
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
	char lwcase;

	int putchar(int lwcase);

	for (lwcase = '0'; lwcase <= '9'; lwcase++)
	{
		putchar(lwcase);
	}

	putchar(10);

>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
	return (0);
}
