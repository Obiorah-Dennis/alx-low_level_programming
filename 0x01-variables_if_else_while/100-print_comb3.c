#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
(int i = 0; i < 10; i++)
{
 (int j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
putchar('\n');
}
}
return (0);
}
