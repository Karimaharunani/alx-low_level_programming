<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
=======
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - The main entry point.
 *
 * Return: 0 if successful.
>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
 */
int main(void)
{
	int i;
<<<<<<< HEAD

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
=======
	int coma = 44;
	int space = ' ';
	int num[12];
	int ltr;

	int putchar(int hex);

	num[10] = 10;

	num[11] = '\0';

	ltr = '0';

	for (i = 0; i <= 10; i++)
	{
		if (i  < 10)
		{
			num[i] = ltr++;
		}

		putchar(num[i]);

		if (i < 9)
		{
			putchar(coma);
			putchar(space);
		}
	}

>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
	return (0);
}
