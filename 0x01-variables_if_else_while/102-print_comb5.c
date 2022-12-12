#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
for (int i = 0; i < 100; i++)
{
for (int j = i + 1; j < 100; j++)
{
putchar('0' + i / 10);

putchar('0' + i % 10);

putchar(' ');

putchar('0' + j / 10);

putchar('0' + j % 10);

putchar(',');
putchar(' ');
}
}
return (0);
}


