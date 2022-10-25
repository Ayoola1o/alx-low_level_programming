#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	char str[10000];
	int i, r;

	i = 0;
	while (*(s + i) != 0)
	{
		str[i] = *(s + i);
		i++;
	}
	r = i - 1;
	i = 0;
	while (r >= 0)
	{
		*(s + r) = str[i];
		r--;
		i++;
	}
}
