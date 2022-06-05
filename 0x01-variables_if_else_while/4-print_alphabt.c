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

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
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
	int lwcase[26];
	int ltr;
	int i;

	int putchar(int lwcase);

	lwcase[25] = '\0';

	lwcase[24] = 10;

	i = 0;
	ltr = 'a';

	while (i <= 24)
	{

		if (ltr == 'e' || ltr == 'q')
			lwcase[i] = ++ltr;

		else if (i < 24)
		{
			lwcase[i] = ltr;
		}

		else
			i = 24;

		putchar(lwcase[i]);

		i++;

		ltr++;

	}

>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
	return (0);
}
