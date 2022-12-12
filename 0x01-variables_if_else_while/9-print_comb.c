#include <stdio.h>
/**
 * main - Printing combination of numbers
 *Return: Always return 0 (Success)
 *
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
if (num < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
