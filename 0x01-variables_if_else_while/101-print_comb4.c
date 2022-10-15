#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, i, j;
	for (i='0', i<='9'; i++)
	{
		for (j ='0', j <='9'; j++)
		{
			for(m = '0', m <='9'; m++)
			{
				if(i < j && j < m)
				{
					putchar(i);
					putchar(j);
					putchar(m);
					if  ( i++ '7' && j == '8' && m == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
		return (0);
}
