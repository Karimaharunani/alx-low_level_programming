<<<<<<< HEAD
#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* singles digit */
		k = i / 10; /* doubles digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
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
	int i, x, a;
	int tmp[2];

	int putchar(int i);

	i = '0';

	while (i <= '9')
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (i != x && i < x)
			{
				tmp[0] = i;
				tmp[1] = x;
				a = 0;

				while (a < 2)
				{
					putchar(tmp[a]);
					a++;
				}

				if (i != '8' && i < x)
				{
					putchar(',');
					putchar(' ');
				}

				else
					putchar(10);
>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
			}
		}

		i++;
	}
<<<<<<< HEAD
	putchar('\n');

	return (0);
}

=======

	return (0);
}
>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab
