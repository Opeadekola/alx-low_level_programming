#include <stdio.h>

/**
 *main - prints all possible combinations of single-digit numbers
 *Numbers must be separated by ,followed by a space
 *Numbers should be printed in ascending order
 *You can only use the putchar function
*Return: Always 0 (Success)
*/
int main(void)
{
	int n = 48;
	int com = 44;
	while (n <= 57)

	{
		putchar(n);
		if (n != 57)
		{
			putchar(com);
			putchar(32);
		}
		n += 1;
	}
	putchar('\n');
	return (0);
}
