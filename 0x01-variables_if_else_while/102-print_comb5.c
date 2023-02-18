#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int num1 = 0, num2 = 1, num1MAX = 98, num2MAX = 99;

	while (num1 <= num1MAX)
	{                                        num2 = num1 + 1;
		while (num2 <= num2MAX)
		{
			putchar(num1 < 9 ? 0 + '0' : (num1 / 10) + '0');
			putchar(num1 < 9 ? num1 + '0' : (num1 % 10) + '0');
			putchar(' ');
			putchar(num2 < 9 ? 0 + '0' : (num2 / 10) + '0');
			putchar(num2 < 9 ? num1 + '0' : (num2 % 10) + '0');

			if (num1 != num1MAX)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}