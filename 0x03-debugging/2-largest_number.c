#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: 0
 */
int largest_number(int a, int b, int c);
{
	int largest;

	if (a > b && a > c)
	{
	largest = a;
	}
	else if (b > c && b > a)
	{
	largest = b;
	}
	else if (c > b)
	{
	largest = c;
	}
	else
	{
	largest = b;
	}

	return (largest);
}
