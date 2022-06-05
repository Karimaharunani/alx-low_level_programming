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
	int c = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	while (c <= 'f')
	{
		putchar(c);
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
	char hex = '0';
	int i;
	int num = 97;

	int putchar(int hex);

	for (i = 0; i < 16; i++)
	{
		(i < 10) ? putchar(hex++) : putchar(num++);
	}

	putchar(10);

>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
	return (0);
}
