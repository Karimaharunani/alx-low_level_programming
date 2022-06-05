<<<<<<< HEAD
#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separated by commas and a space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 6 times.
 * You are not allowed to use any variables of type `char`.
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* singles */

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
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
	int i, x, y, a;
	int tmp[3];

	int putchar(int i);

	i = '0';

	while (i <= '9')
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				if ((i != x && i < x && i != y && i < y) && (x != y && x < y))
				{
					tmp[0] = i;
					tmp[1] = x;
					tmp[2] = y;
					a = 0;
					while (a < 3)
					{
						putchar(tmp[a]);
						a++;
					}

					if (i != '8' && i < x && i != '7' && i < y)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

		i++;
	}
	putchar(10);
>>>>>>> 55e95ef5bb1ecef1b53ed675cf27c08ab3bf2dab

	return (0);
}
