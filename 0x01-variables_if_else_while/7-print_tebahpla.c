<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	i = 0;
	c = 'z';
	while (i < 26)
	{
		putchar(c - i);
		i++;
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
	int lwcase[28];

	int putchar(int lwcase);

	int i;
	char ltr;

	lwcase[26] = 10;

	lwcase[27] = '\0';

	ltr = 'z';

	for (i = 0; i < 27; i++)
	{
		if (i < 26)
			lwcase[i] = ltr;

		putchar(lwcase[i]);

		ltr--;
	}

>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
	return (0);
}
