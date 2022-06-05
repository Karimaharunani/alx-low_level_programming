<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int i;

	c = 'a';
	for (i = 0; i < 26; i++)
	{
		putchar(c + i);
	}
	c = 'a';
	for (i =  0; i < 26; i++)
	{
		putchar((c + i) - 32);
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
	char ltr = 'A';

	char upcase[27];

	int putchar(int upcase);

	int i;

	upcase[27] = '\0';

	for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
		putchar(lwcase);

	for (i = 0; i < 27; i++)
	{
		if (i == 26)
			upcase[i] = 10;

		else
			upcase[i] = ltr++;

		putchar(upcase[i]);
	}

>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
	return (0);
}
