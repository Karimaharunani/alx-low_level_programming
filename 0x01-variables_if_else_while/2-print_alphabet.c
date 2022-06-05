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
	c = 'a';
	while (i < 26)
	{
		putchar(c + i);
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
	int ltr = 97;
	int i;

	int putchar(int lwcase);

	int lwcase[27];

	lwcase[27] = '\0';

	for (i = 0; i <= 26
			; i++)
	{
		if (i == 26)
			lwcase[i] = 10;

		else
			lwcase[i] = ltr + i;

		putchar(lwcase[i]);
	}

>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
	return (0);
}
