#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i,k='0',j;

	for (i = 0; i <='9'; i++)
	{
		for (j=k; j<='9'; j++)
		{
			putchar(i);
			putchar(j);
		}
		if (i == j)
		{
			continue;
		}
		if (i =='8' && j =='9' )
		{
			break;
		}
		else
		{
			putchar('');
			putchar('');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
